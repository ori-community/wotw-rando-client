#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraShake {
    IL2CPP_REGISTER_METHOD(0x00B1C3B0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00B1C480, void, OnPoolSpawned, (app::CameraShake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B1C4D0, app::Vector3, get_CurrentOffset, (app::CameraShake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B1C6A0, app::Vector3, get_CurrentRotation, (app::CameraShake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B1C880, bool, get_IsLooping, (app::CameraShake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B1C9B0, void, Awake, (app::CameraShake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (app::CameraShake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B1C9C0, void, SampleValue, (app::CameraShake * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x00B1CA10, float, get_Duration, (app::CameraShake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (app::CameraShake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3CF90, void, PerformTheShake, (app::CameraShake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B1CB00, float, get_ModifiedStrength, (app::CameraShake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B1CFA0, void, OnEnable, (app::CameraShake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B1D080, void, OnDisable, (app::CameraShake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B1D170, app::TimelineEntity*, Convert, (app::CameraShake * this_ptr, app::Transform* target))
    IL2CPP_REGISTER_METHOD(0x00B1D310, void, ctor, (app::CameraShake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B1D340, void, cctor, ())
} // namespace app::classes::CameraShake
