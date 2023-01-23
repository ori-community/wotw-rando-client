#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SneezeSlugEntity.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SneezeSlugEntity_HitProtectionState__Enum.h>
#include <Modloader/app/structs/Damage.h>

namespace app::classes::SneezeSlugEntity {
    IL2CPP_REGISTER_METHOD(0x00E59A60, bool, get_IsFacingTarget, (app::SneezeSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EDAFE0, bool, get_IsEntityOnScreen, (app::SneezeSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EDAFF0, bool, get_IsBurrowed, (app::SneezeSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EDB000, bool, get_IsTargetOnTheRight, (app::SneezeSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EDB030, bool, get_FacingTarget, (app::SneezeSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EDB050, bool, get_IsTargetOnTheLeft, (app::SneezeSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EDB080, bool, get_CanReachUnburrowPoint, (app::SneezeSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00805D00, bool, get_ForceBurrow, (app::SneezeSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EDB090, void, set_ForceBurrow, (app::SneezeSlugEntity * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00EDB0B0, bool, get_CanBurrow, (app::SneezeSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EDB360, void, AddUnburrowPoints, (app::SneezeSlugEntity * this_ptr, app::List_1_UnityEngine_Vector3_* points))
    IL2CPP_REGISTER_METHOD(0x00A84680, app::List_1_UnityEngine_Vector3_*, GetUnburrowPoints, (app::SneezeSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EDB420, bool, CanReachAnyUnburrowPoint, (app::SneezeSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EDAFF0, bool, get_Burrowed, (app::SneezeSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EDB9F0, void, set_Burrowed, (app::SneezeSlugEntity * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00EDBA00, void, OnAwake, (app::SneezeSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EDBD80, void, ResetEntity, (app::SneezeSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EDBDD0, void, OnFixedUpdate, (app::SneezeSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EDC0C0, app::PlatformMovement*, GetPlatformMovement, (app::SneezeSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EDC0D0, bool, get_IgnoreGoThroughs, (app::SneezeSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EDC1F0, void, set_IgnoreGoThroughs, (app::SneezeSlugEntity * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00EDC340, void, SetVulnerability, (app::SneezeSlugEntity * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x00EDC370, void, Start, (app::SneezeSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EDC470, void, OnDamageReceived, (app::SneezeSlugEntity * this_ptr, app::DamageResult result))
    IL2CPP_REGISTER_METHOD(0x00EDC580, void, SetTouchDamageWeight, (app::SneezeSlugEntity * this_ptr, app::DamageWeight__Enum value))
    IL2CPP_REGISTER_METHOD(0x00EDC5A0, void, ResetTouchDamageWeight, (app::SneezeSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EDC5D0, void, SetProtectionState, (app::SneezeSlugEntity * this_ptr, app::Object* setter, app::SneezeSlugEntity_HitProtectionState__Enum value))
    IL2CPP_REGISTER_METHOD(0x00EDC890, app::SneezeSlugEntity_HitProtectionState__Enum, get_ProtectionState, (app::SneezeSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EDC8B0, bool, IsVulnerable, (app::SneezeSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EDC8D0, bool, IsInvulnerable, (app::SneezeSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EDC8F0, void, PreventVulnerability, (app::SneezeSlugEntity * this_ptr, float invulnerability_time))
    IL2CPP_REGISTER_METHOD(0x00B575A0, bool, IsProtectedFrom_1, (app::SneezeSlugEntity * this_ptr, app::SneezeSlugEntity_HitProtectionState__Enum state, app::DamageWeight__Enum damage_weight))
    IL2CPP_REGISTER_METHOD(0x00EDC910, bool, IsProtectedFrom_2, (app::SneezeSlugEntity * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00EDC9B0, void, ctor, (app::SneezeSlugEntity * this_ptr))
} // namespace app::classes::SneezeSlugEntity
