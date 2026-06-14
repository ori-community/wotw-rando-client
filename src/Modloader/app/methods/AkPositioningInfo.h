#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Ak3DPositionType__Enum.h>
#include <Modloader/app/structs/Ak3DSpatializationMode__Enum.h>
#include <Modloader/app/structs/AkPositioningInfo.h>
#include <Modloader/app/structs/AkSpeakerPanningType__Enum.h>

namespace app::classes::AkPositioningInfo {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, app::AkPositioningInfo* this_ptr, void* c_ptr, bool c_memory_own)
    IL2CPP_REGISTER_METHOD(0x0188FBD0, void*, getCPtr, app::AkPositioningInfo* obj)
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, app::AkPositioningInfo* this_ptr, void* c_ptr)
    IL2CPP_REGISTER_METHOD(0x0188FC60, void, Finalize, app::AkPositioningInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0188FCE0, void, Dispose, app::AkPositioningInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0188FEF0, void, set_fCenterPct, app::AkPositioningInfo* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01890020, float, get_fCenterPct, app::AkPositioningInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01890140, void, set_pannerType, app::AkPositioningInfo* this_ptr, app::AkSpeakerPanningType__Enum value)
    IL2CPP_REGISTER_METHOD(0x01890270, app::AkSpeakerPanningType__Enum, get_pannerType, app::AkPositioningInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01890390, void, set_e3dPositioningType, app::AkPositioningInfo* this_ptr, app::Ak3DPositionType__Enum value)
    IL2CPP_REGISTER_METHOD(0x018904C0, app::Ak3DPositionType__Enum, get_e3dPositioningType, app::AkPositioningInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018905E0, void, set_bHoldEmitterPosAndOrient, app::AkPositioningInfo* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01890710, bool, get_bHoldEmitterPosAndOrient, app::AkPositioningInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01890840, void, set_e3DSpatializationMode, app::AkPositioningInfo* this_ptr, app::Ak3DSpatializationMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x01890970, app::Ak3DSpatializationMode__Enum, get_e3DSpatializationMode, app::AkPositioningInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01890A90, void, set_bEnableAttenuation, app::AkPositioningInfo* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01890BC0, bool, get_bEnableAttenuation, app::AkPositioningInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01890CF0, void, set_bUseConeAttenuation, app::AkPositioningInfo* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01890E20, bool, get_bUseConeAttenuation, app::AkPositioningInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01890F50, void, set_fInnerAngle, app::AkPositioningInfo* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01891080, float, get_fInnerAngle, app::AkPositioningInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018911A0, void, set_fOuterAngle, app::AkPositioningInfo* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x018912D0, float, get_fOuterAngle, app::AkPositioningInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018913F0, void, set_fConeMaxAttenuation, app::AkPositioningInfo* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01891520, float, get_fConeMaxAttenuation, app::AkPositioningInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01891640, void, set_LPFCone, app::AkPositioningInfo* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01891770, float, get_LPFCone, app::AkPositioningInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01891890, void, set_HPFCone, app::AkPositioningInfo* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x018919C0, float, get_HPFCone, app::AkPositioningInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01891AE0, void, set_fMaxDistance, app::AkPositioningInfo* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01891C10, float, get_fMaxDistance, app::AkPositioningInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01891D30, void, set_fVolDryAtMaxDist, app::AkPositioningInfo* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01891E60, float, get_fVolDryAtMaxDist, app::AkPositioningInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01891F80, void, set_fVolAuxGameDefAtMaxDist, app::AkPositioningInfo* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x018920B0, float, get_fVolAuxGameDefAtMaxDist, app::AkPositioningInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018921D0, void, set_fVolAuxUserDefAtMaxDist, app::AkPositioningInfo* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01892300, float, get_fVolAuxUserDefAtMaxDist, app::AkPositioningInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01892420, void, set_LPFValueAtMaxDist, app::AkPositioningInfo* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01892550, float, get_LPFValueAtMaxDist, app::AkPositioningInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01892670, void, set_HPFValueAtMaxDist, app::AkPositioningInfo* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x018927A0, float, get_HPFValueAtMaxDist, app::AkPositioningInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018928C0, void, ctor_2, app::AkPositioningInfo* this_ptr)
} // namespace app::classes::AkPositioningInfo
