#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::StaggerDamageTracker {
    IL2CPP_REGISTER_METHOD(0x00E2F880, float, get_Acumulator, (app::StaggerDamageTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2F890, float, get_Timer, (app::StaggerDamageTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00504E70, float, get_ImunityTimer, (app::StaggerDamageTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2F8A0, void, Initialize, (app::StaggerDamageTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2F8D0, void, Step, (app::StaggerDamageTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2F9B0, void, RegisterDamage, (app::StaggerDamageTracker * this_ptr, app::EntityDamageEvent* damage_event, app::StaggerSettings* stagger_settings))
    IL2CPP_REGISTER_METHOD(0x00E2FA50, bool, CanRegisterStagger, (app::StaggerDamageTracker * this_ptr, app::EntityDamageEvent* damage_event, app::StaggerSettings* stagger_settings))
    IL2CPP_REGISTER_METHOD(0x00E2FD10, void, Play, (app::StaggerDamageTracker * this_ptr, app::EntityDamageEvent* damage_event, app::StaggerSettings* stagger_settings))
    IL2CPP_REGISTER_METHOD(0x00E30190, void, Reset, (app::StaggerDamageTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E301A0, void, ctor, (app::StaggerDamageTracker * this_ptr))
} // namespace app::classes::Moon::StaggerDamageTracker
