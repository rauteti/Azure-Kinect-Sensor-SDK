/** \file VISIONARY.h
 * Copyright (c) Microsoft Corporation. All rights reserved.
 * Licensed under the MIT License.
 * Kinect For Azure SDK.
 */

#ifndef VISIONARY_H
#define VISIONARY_H

#include <k4a/k4atypes.h>

#include <cstdio>
#include <iostream>
#include <memory>
#include <sstream>
#include <fstream>
#include <iterator>

#include <VisionaryControl.h>
#include <CoLaParameterReader.h>
#include <CoLaParameterWriter.h>
#include <VisionaryTMiniData.h>    // Header specific for the Time of Flight data
#include <VisionaryDataStream.h>
#include <PointXYZ.h>
#include <PointCloudPlyWriter.h>

#ifdef __cplusplus
extern "C" {
#endif



/** Handle to the visionary device.
 *
 * Handles are created with \ref visionary_create and closed
 * with \ref visionary_destroy.
 * Invalid handles are set to 0.
 */
//K4A_DECLARE_HANDLE(visionary_t);


/** Open a handle to the Visionary device.
 *
 */
k4a_result_t colaScan();

#ifdef __cplusplus
}
#endif

#endif /* IMU_H */
