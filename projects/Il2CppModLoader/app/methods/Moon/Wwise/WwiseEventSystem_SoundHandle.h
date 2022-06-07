#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Wwise::WwiseEventSystem_SoundHandle {
    IL2CPP_REGISTER_METHOD(0x001FEC90, void, ctor, (app::WwiseEventSystem_SoundHandle__Boxed * this_ptr, app::WwiseEventSystem_SoundHandleProtected * snd_handle, int64_t handle_version))
    IL2CPP_REGISTER_METHOD(0x001FECA0, void, Play, (app::WwiseEventSystem_SoundHandle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470CB48, WwiseEventSystem_SoundHandle_Play__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0011D880, bool, get_IsAllocated, (app::WwiseEventSystem_SoundHandle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FECB0, bool, get_IsValid, (app::WwiseEventSystem_SoundHandle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FECC0, void, Stop, (app::WwiseEventSystem_SoundHandle__Boxed * this_ptr, int32_t transit_time_ms, app::AkCurveInterpolation__Enum curve))
    IL2CPP_REGISTER_METHOD(0x001FECD0, void, Pause, (app::WwiseEventSystem_SoundHandle__Boxed * this_ptr, int32_t transit_time_ms, app::AkCurveInterpolation__Enum curve))
    IL2CPP_REGISTER_METHOD(0x001FECE0, void, Resume, (app::WwiseEventSystem_SoundHandle__Boxed * this_ptr, int32_t transit_time_ms, app::AkCurveInterpolation__Enum curve))
    IL2CPP_REGISTER_METHOD(0x001FECF0, void, Break, (app::WwiseEventSystem_SoundHandle__Boxed * this_ptr, int32_t transit_time_ms, app::AkCurveInterpolation__Enum curve))
    IL2CPP_REGISTER_METHOD(0x001FED60, void, ReleaseEnvelope, (app::WwiseEventSystem_SoundHandle__Boxed * this_ptr, int32_t transit_time_ms, app::AkCurveInterpolation__Enum curve))
    IL2CPP_REGISTER_METHOD(0x001FEDC0, app::WwiseEventSystem_EventStatus__Enum, get_Status, (app::WwiseEventSystem_SoundHandle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FEDD0, void, ReleaseHandle, (app::WwiseEventSystem_SoundHandle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FEDE0, void, RegisterCallback, (app::WwiseEventSystem_SoundHandle__Boxed * this_ptr, app::AkCallbackType__Enum flags, app::AkCallbackManager_EventCallback * callback))
    IL2CPP_REGISTER_METHOD(0x001FEDF0, void, Validate, (app::WwiseEventSystem_SoundHandle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04751128, WwiseEventSystem_SoundHandle_Validate__MethodInfo)
}
