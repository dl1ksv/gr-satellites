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
/* BINDTOOL_HEADER_FILE(ao40_rs_decoder.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(2ad5aeeab7fba2944eb288f61180a126)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <satellites/ao40_rs_decoder.h>
// pydoc.h is automatically generated in the build directory
#include <ao40_rs_decoder_pydoc.h>

void bind_ao40_rs_decoder(py::module& m)
{

    using ao40_rs_decoder    = ::gr::satellites::ao40_rs_decoder;


    py::class_<ao40_rs_decoder, gr::block, gr::basic_block,
        std::shared_ptr<ao40_rs_decoder>>(m, "ao40_rs_decoder", D(ao40_rs_decoder))

        .def(py::init(&ao40_rs_decoder::make),
           py::arg("verbose"),
           D(ao40_rs_decoder,make)
        )
        



        ;




}






