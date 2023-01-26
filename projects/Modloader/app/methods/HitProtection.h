#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HitProtection.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/HitProtectionState__Enum.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::HitProtection {
    IL2CPP_REGISTER_METHOD(0x00B571B0, void, SetVulnerability, (app::HitProtection * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x00B571D0, void, Update, (app::HitProtection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B572A0, void, SetProtectionState, (app::HitProtection * this_ptr, app::Object* setter, app::HitProtectionState__Enum value))
    IL2CPP_REGISTER_METHOD(0x00B57530, app::HitProtectionState__Enum, get_ProtectionState, (app::HitProtection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B57540, bool, IsVulnerable, (app::HitProtection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B57560, bool, IsInvulnerable, (app::HitProtection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B57580, void, PreventVulnerability, (app::HitProtection * this_ptr, float invulnerability_time))
    IL2CPP_REGISTER_METHOD(0x00B575A0, bool, IsProtectedFrom_1, (app::HitProtection * this_ptr, app::HitProtectionState__Enum state, app::DamageWeight__Enum damage_weight))
    IL2CPP_REGISTER_METHOD(0x00B575C0, bool, IsProtectedFrom_2, (app::HitProtection * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00B57650, void, ctor, (app::HitProtection * this_ptr))
} // namespace app::classes::HitProtection
