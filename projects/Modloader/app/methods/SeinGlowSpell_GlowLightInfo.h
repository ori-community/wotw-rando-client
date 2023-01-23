#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinGlowSpell_GlowType__Enum.h>
#include <Modloader/app/structs/SeinGlowSpell_GlowLightInfo.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/SeinGlowSpell_GlowLightState__Enum.h>

namespace app::classes::SeinGlowSpell_GlowLightInfo {
    IL2CPP_REGISTER_METHOD(0x003FC830, app::SeinGlowSpell_GlowType__Enum, get_GlowType, (app::SeinGlowSpell_GlowLightInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_Radius, (app::SeinGlowSpell_GlowLightInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B5650, float, get_Intensity, (app::SeinGlowSpell_GlowLightInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AEDAD0, void, ctor, (app::SeinGlowSpell_GlowLightInfo * this_ptr, float min_radius, float max_radius, float on_duration, app::AnimationCurve* turn_on_curve, app::AnimationCurve* turn_off_curve, app::SeinGlowSpell_GlowType__Enum glow_type, app::Transform* effect))
    IL2CPP_REGISTER_METHOD(0x00AEDB10, void, Update, (app::SeinGlowSpell_GlowLightInfo * this_ptr, float dt))
    IL2CPP_REGISTER_METHOD(0x00AEDE10, bool, IsTurningOn, (app::SeinGlowSpell_GlowLightInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AEDE20, bool, IsOn, (app::SeinGlowSpell_GlowLightInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AEDE30, bool, IsTurningOff, (app::SeinGlowSpell_GlowLightInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AEDE40, bool, IsOff, (app::SeinGlowSpell_GlowLightInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AEDE50, void, TurnOff, (app::SeinGlowSpell_GlowLightInfo * this_ptr, bool cancel))
    IL2CPP_REGISTER_METHOD(0x00AEDFC0, void, ChangeState, (app::SeinGlowSpell_GlowLightInfo * this_ptr, app::SeinGlowSpell_GlowLightState__Enum new_state))
    IL2CPP_REGISTER_METHOD(0x00AEDFD0, void, Destroy, (app::SeinGlowSpell_GlowLightInfo * this_ptr))
} // namespace app::classes::SeinGlowSpell_GlowLightInfo
