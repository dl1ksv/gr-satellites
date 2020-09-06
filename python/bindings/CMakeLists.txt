# Copyright 2020 Free Software Foundation, Inc.
#
# This file is part of GNU Radio
#
# SPDX-License-Identifier: GPL-3.0-or-later
#

GR_PYTHON_CHECK_MODULE_RAW(
    "pygccxml"
    "import pygccxml"
    PYGCCXML_FOUND
    )

include(GrPybind)

########################################################################
# Python Bindings
########################################################################
message(STATUS "Creating bindings")

list(APPEND satellites_python_files
     ao40_rs_decoder_python.cc
     descrambler308_python.cc
     nrzi_encode_python.cc
     ax100_decode_python.cc
     distributed_syncframe_soft_python.cc
     nusat_decoder_python.cc
     u482c_decode_python.cc
     decode_ra_code_python.cc
     encode_rs_python.cc
     varlen_packet_framer_python.cc
     decode_rs_general_python.cc
     lilacsat1_demux_python.cc
     varlen_packet_tagger_python.cc
     decode_rs_interleaved_python.cc
     matrix_deinterleaver_soft_python.cc
     decode_rs_python.cc
     nrzi_decode_python.cc
     python_bindings.cc
    )

GR_PYBIND_MAKE_OOT(satellites 
   ../..
   gr::satellites
   "${satellites_python_files}")

install(TARGETS satellites_python DESTINATION ${GR_PYTHON_DIR}/satellites COMPONENT pythonapi)
