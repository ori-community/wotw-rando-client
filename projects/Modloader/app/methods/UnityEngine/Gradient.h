#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Gradient.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/GradientAlphaKey__Array.h>
#include <Modloader/app/structs/GradientColorKey__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::UnityEngine::Gradient {
    IL2CPP_REGISTER_METHOD(0x02529FC0, void, ctor, (app::Gradient * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252A020, void*, Init, ())
    IL2CPP_REGISTER_METHOD(0x0252A070, void, Cleanup, (app::Gradient * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252A0C0, bool, Internal_Equals, (app::Gradient * this_ptr, void* other))
    IL2CPP_REGISTER_METHOD(0x0252A120, void, Finalize, (app::Gradient * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252A1E0, app::Color, Evaluate, (app::Gradient * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x0252A270, app::GradientColorKey__Array*, get_colorKeys, (app::Gradient * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252A2C0, void, set_colorKeys, (app::Gradient * this_ptr, app::GradientColorKey__Array* value))
    IL2CPP_REGISTER_METHOD(0x0252A320, app::GradientAlphaKey__Array*, get_alphaKeys, (app::Gradient * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252A370, void, set_alphaKeys, (app::Gradient * this_ptr, app::GradientAlphaKey__Array* value))
    IL2CPP_REGISTER_METHOD(0x0252A3D0, void, SetKeys, (app::Gradient * this_ptr, app::GradientColorKey__Array* color_keys, app::GradientAlphaKey__Array* alpha_keys))
    IL2CPP_REGISTER_METHOD(0x0252A440, bool, Equals_1, (app::Gradient * this_ptr, app::Object* o))
    IL2CPP_REGISTER_METHOD(0x0252A600, bool, Equals_2, (app::Gradient * this_ptr, app::Gradient* other))
    IL2CPP_REGISTER_METHOD(0x01F25890, int32_t, GetHashCode, (app::Gradient * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252A720, void, Evaluate_Injected, (app::Gradient * this_ptr, float time, app::Color* ret))
} // namespace app::classes::UnityEngine::Gradient
