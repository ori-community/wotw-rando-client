#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MortarEntity_AimVeloCache_EntityParams.h>
#include <Modloader/app/structs/MortarEntity.h>
#include <Modloader/app/structs/MortarPlaceholder.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/MortarSpitAttackSettings.h>

namespace app::classes::MortarEntity_AimVeloCache_EntityParams {
    IL2CPP_REGISTER_METHOD(0x014797A0, void, ctor, (app::MortarEntity_AimVeloCache_EntityParams * this_ptr, app::MortarEntity* entity))
    IL2CPP_REGISTER_METHOD(0x01479CA0, app::MortarPlaceholder*, get_Placeholder, (app::MortarEntity_AimVeloCache_EntityParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0064EB90, app::Vector3, get_EntityPos, (app::MortarEntity_AimVeloCache_EntityParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00446940, app::Vector3, get_EntityUp, (app::MortarEntity_AimVeloCache_EntityParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01479D70, app::Vector2, get_AvatarLookDirection, (app::MortarEntity_AimVeloCache_EntityParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01479DB0, float, get_PlaceholderFacing, (app::MortarEntity_AimVeloCache_EntityParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01479EA0, app::MortarSpitAttackSettings*, get_SpitAttackSettings, (app::MortarEntity_AimVeloCache_EntityParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01479EC0, float, get_MinSpitRange, (app::MortarEntity_AimVeloCache_EntityParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01479EF0, float, get_MaxSpitRange, (app::MortarEntity_AimVeloCache_EntityParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01479F40, bool, get_CanTurn, (app::MortarEntity_AimVeloCache_EntityParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01479F70, float, AirTimeFromTargetDistance, (app::MortarEntity_AimVeloCache_EntityParams * this_ptr, float target_distance))
    IL2CPP_REGISTER_METHOD(0x01479FD0, int32_t, CalculateSpitOriginIndexForTarget, (app::MortarEntity_AimVeloCache_EntityParams * this_ptr, app::Vector3 target))
    IL2CPP_REGISTER_METHOD(0x0147A160, app::Vector3, GetSpitOriginFromIndex, (app::MortarEntity_AimVeloCache_EntityParams * this_ptr, int32_t spit_origin_index))
    IL2CPP_REGISTER_METHOD(0x0147A4D0, app::Vector3, CalculateSpitOriginForTarget, (app::MortarEntity_AimVeloCache_EntityParams * this_ptr, app::Vector3 target))
} // namespace app::classes::MortarEntity_AimVeloCache_EntityParams
