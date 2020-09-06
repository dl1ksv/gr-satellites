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
/* BINDTOOL_HEADER_FILE(nusat_decoder.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(4209df056181fb2cc9b7b9f89636d65b)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <satellites/nusat_decoder.h>
// pydoc.h is automatically generated in the build directory
#include <nusat_decoder_pydoc.h>

void bind_nusat_decoder(py::module& m)
{

    using nusat_decoder    = ::gr::satellites::nusat_decoder;


    py::class_<nusat_decoder, gr::block, gr::basic_block,
        std::shared_ptr<nusat_decoder>>(m, "nusat_decoder", D(nusat_decoder))

        .def(py::init(&nusat_decoder::make),
           D(nusat_decoder,make)
        )
        



        ;




}







