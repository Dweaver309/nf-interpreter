//
// Copyright (c) 2019 The nanoFramework project contributors
// See LICENSE file in the project root for full license information.
//

#ifndef _PLATFORM_TARGET_CAPABILITIES_H_
#define _PLATFORM_TARGET_CAPABILITIES_H_ 1

///////////////////////////////////////////////////////////////////////////////////////////////////////
// !!! KEEP IN SYNC WITH nanoFramework.Tools.Debugger.Stm32.TargetCapabilities (in managed code) !!! //
///////////////////////////////////////////////////////////////////////////////////////////////////////

#ifdef __cplusplus
extern "C" {
#endif

// this platform doesn't have any declared capabilities

// the targets of this platform can declate these capabilities
typedef enum TargetCapabilities
{
    // JTAG update
    TargetCapabilities_JtagUpdate   = 0x00000000,

    // DFU update
    TargetCapabilities_DfuUpdate    = 0x00040000,

}TargetCapabilities;

#ifdef __cplusplus
}
#endif

#endif //_PLATFORM_TARGET_CAPABILITIES_H_
