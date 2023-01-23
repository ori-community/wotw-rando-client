#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ControllerShake.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::ControllerShake {
    IL2CPP_REGISTER_METHOD(0x00B1C480, void, OnPoolSpawned, (app::ControllerShake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011F1870, float, get_CurrentShake, (app::ControllerShake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011F1960, bool, get_IsLooping, (app::ControllerShake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A791C0, bool, get_ControllerShakeActive, (app::ControllerShake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (app::ControllerShake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B1C9C0, void, SampleValue, (app::ControllerShake * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x011F19E0, float, get_Duration, (app::ControllerShake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (app::ControllerShake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3CF90, void, PerformTheShake, (app::ControllerShake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011F1AE0, void, Start, (app::ControllerShake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011F1B40, float, get_ModifiedStrength, (app::ControllerShake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, (app::ControllerShake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011F2090, void, OnEnable, (app::ControllerShake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011F2170, void, OnDisable, (app::ControllerShake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B1D310, void, ctor, (app::ControllerShake * this_ptr))
} // namespace app::classes::ControllerShake
