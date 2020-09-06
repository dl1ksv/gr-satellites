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
/* BINDTOOL_HEADER_FILE(varlen_packet_framer.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(0a07f43d520bf942edd00c89b2f37fe5)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <satellites/varlen_packet_framer.h>
// pydoc.h is automatically generated in the build directory
#include <varlen_packet_framer_pydoc.h>

void bind_varlen_packet_framer(py::module& m)
{

    using varlen_packet_framer    = ::gr::satellites::varlen_packet_framer;


    py::class_<varlen_packet_framer, gr::block, gr::basic_block,
        std::shared_ptr<varlen_packet_framer>>(m, "varlen_packet_framer", D(varlen_packet_framer))

        .def(py::init(&varlen_packet_framer::make),
           py::arg("packet_key"),
           py::arg("length_field_size"),
           py::arg("endianness"),
           py::arg("use_golay"),
           py::arg("sync_word"),
           D(varlen_packet_framer,make)
        )
        



        ;




}







