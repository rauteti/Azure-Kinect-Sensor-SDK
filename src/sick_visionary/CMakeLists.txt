# Copyright (c) Microsoft Corporation. All rights reserved.
# Licensed under the MIT License.

add_library(k4a_sick_visionary STATIC
            sick_visionary.c
            )

# Consumers should #include <k4ainternal/sick_visionary.h>
target_include_directories(k4a_sick_visionary PUBLIC
    ${K4A_PRIV_INCLUDE_DIR})

# Dependencies of this library
target_link_libraries(k4a_sick_visionary PUBLIC
    sick_visionary_cpp_shared::sick_visionary_cpp_shared
    k4ainternal::logging
    )

# Define alias for other targets to link against
add_library(k4ainternal::sick_visionary ALIAS k4a_sick_visionary)