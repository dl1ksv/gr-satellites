/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(nrzi_decode.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(51cc4408410ef41bc0aea93701b1c220)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <satellites/nrzi_decode.h>
// pydoc.h is automatically generated in the build directory
#include <nrzi_decode_pydoc.h>

void bind_nrzi_decode(py::module& m)
{

    using nrzi_decode    = ::gr::satellites::nrzi_decode;


    py::class_<nrzi_decode, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<nrzi_decode>>(m, "nrzi_decode", D(nrzi_decode))

        .def(py::init(&nrzi_decode::make),
           D(nrzi_decode,make)
        )
        



        ;




}







