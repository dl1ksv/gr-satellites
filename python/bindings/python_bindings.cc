/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#include <pybind11/pybind11.h>

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <numpy/arrayobject.h>

namespace py = pybind11;


// Headers for binding functions
/**************************************/
/* The following comment block is used for
/* gr_modtool to insert function prototypes
/* Please do not delete
/**************************************/
// BINDING_FUNCTION_PROTOTYPES(
     void bind_ao40_rs_decoder(py::module&);
     void bind_descrambler308(py::module&);
     void bind_nrzi_encode(py::module&);
     void bind_ax100_decode(py::module&);
     void bind_distributed_syncframe_soft(py::module&);
     void bind_nusat_decoder(py::module&);
     void bind_u482c_decode(py::module&);
     void bind_decode_ra_code(py::module&);
     void bind_encode_rs(py::module&);
     void bind_varlen_packet_framer(py::module&);
     void bind_decode_rs_general(py::module&);
     void bind_lilacsat1_demux(py::module&);
     void bind_varlen_packet_tagger(py::module&);
     void bind_decode_rs_interleaved(py::module&);
     void bind_matrix_deinterleaver_soft(py::module&);
     void bind_decode_rs(py::module&);
     void bind_nrzi_decode(py::module&);
// ) END BINDING_FUNCTION_PROTOTYPES


// We need this hack because import_array() returns NULL
// for newer Python versions.
// This function is also necessary because it ensures access to the C API
// and removes a warning.
void* init_numpy()
{
    import_array();
    return NULL;
}

PYBIND11_MODULE(satellites_python, m)
{
    // Initialize the numpy C API
    // (otherwise we will see segmentation faults)
    init_numpy();

    // Allow access to base block methods
    py::module::import("gnuradio.gr");
    /**************************************/
    /* The following comment block is used for
    /* gr_modtool to insert binding function calls
    /* Please do not delete
    /**************************************/
    // BINDING_FUNCTION_CALLS(
     bind_ao40_rs_decoder(m);
     bind_descrambler308(m);
     bind_nrzi_encode(m);
     bind_ax100_decode(m);
     bind_distributed_syncframe_soft(m);
     bind_nusat_decoder(m);
     bind_u482c_decode(m);
     bind_decode_ra_code(m);
     bind_encode_rs(m);
     bind_varlen_packet_framer(m);
     bind_decode_rs_general(m);
     bind_lilacsat1_demux(m);
     bind_varlen_packet_tagger(m);
     bind_decode_rs_interleaved(m);
     bind_matrix_deinterleaver_soft(m);
     bind_decode_rs(m);
     bind_nrzi_decode(m);
    // ) END BINDING_FUNCTION_CALLS
}
