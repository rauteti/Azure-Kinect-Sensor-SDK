// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

//************************ Includes *****************************
// This library
#include <k4ainternal/sick_visionary.h>

// Dependent libraries
#include <k4ainternal/logging.h>

// System dependencies
#include <stdlib.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

//**************Symbolic Constant Macros (defines)  *************

//************************ Typedefs *****************************

//************ Declarations (Statics and globals) ***************

//******************* Function Prototypes ***********************

//*********************** Functions *****************************

/**
 *  Function for ?
 */
k4a_result_t colaScan()
{
    k4a_result_t result = K4A_RESULT_SUCCEEDED;

    using namespace visionary;

    const char ipAddress[] = "192.168.136.10";
    unsigned short dataPort = 2114;

    // Generate Visionary instance
    auto pDataHandler = std::make_shared<VisionaryTMiniData>();
    VisionaryDataStream dataStream(pDataHandler);
    VisionaryControl visionaryControl;

    //-----------------------------------------------
    // Connect to devices data stream
    if (!dataStream.open(ipAddress, htons(dataPort)))
    {
        std::printf("Failed to open data stream connection to device.\n");
    }

    //-----------------------------------------------
    // Connect to devices control channel
    if (!visionaryControl.open(VisionaryControl::ProtocolType::COLA_2, ipAddress, 5000 /*ms*/))
    {
        std::printf("Failed to open control connection to device.\n");
    }

    return result;
}

#ifdef __cplusplus
}
#endif
