#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::WaterFallMasksSystem {
    IL2CPP_REGISTER_METHOD(0x00F28AF0, bool, ForceDisableWaterFallObjects, ())
    IL2CPP_REGISTER_METHODINFO(0x0474FD60, WaterFallMasksSystem_ForceDisableWaterFallObjects__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F28D30, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00F28E00, app::WaterFallMasksSystem *, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x00F28FF0, void, ctor, (app::WaterFallMasksSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F29400, void, RegisterWaterFall, (app::WaterFallMasksSystem * this_ptr, app::WaterFallMask * waterfall_mask))
    IL2CPP_REGISTER_METHOD(0x00F29590, void, UnregisterWaterFall, (app::WaterFallMasksSystem * this_ptr, app::WaterFallMask * water_fall_mask))
    IL2CPP_REGISTER_METHOD(0x00F296D0, void, RegisterInteractionAgent, (app::WaterFallMasksSystem * this_ptr, app::IWaterfallInteractionAgent * agent))
    IL2CPP_REGISTER_METHOD(0x00F29770, void, UnregisterInteractionAgent, (app::WaterFallMasksSystem * this_ptr, app::IWaterfallInteractionAgent * agent))
    IL2CPP_REGISTER_METHOD(0x00F29810, void, OnPauseDrivable, (app::WaterFallMasksSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F29980, void, OnResumeDrivable, (app::WaterFallMasksSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::UpdateType__Enum, get_UpdateType, (app::WaterFallMasksSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F29AF0, void, OnUpdate, (app::WaterFallMasksSystem * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00F29D70, void, InitWaterfall, (app::WaterFallMasksSystem * this_ptr, app::WaterFallMask * water_fall))
    IL2CPP_REGISTER_METHOD(0x00F29ED0, void, StartTimeslicedInit, (app::WaterFallMasksSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F2A2E0, app::IEnumerator *, TimeslicedInit, (app::WaterFallMasksSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String *, GetTimesliceContextualDebugData, (app::WaterFallMasksSystem * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047854A0, WaterFallMasksSystem_GetTimesliceContextualDebugData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}
