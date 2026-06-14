#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OrbSpawner.h>
#include <Modloader/app/structs/OrbSpawnerSettingsOverride.h>

namespace app::classes::OrbSpawnerSettingsOverride {
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, ShouldOverrideHorizontalSpeedCurve, app::OrbSpawnerSettingsOverride* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, ShouldOverrideVerticalSpeedCurve, app::OrbSpawnerSettingsOverride* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, ShouldOverrideGravity, app::OrbSpawnerSettingsOverride* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00446590, bool, ShouldOverrideInitialDropPickupState, app::OrbSpawnerSettingsOverride* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061DE80, void, Apply, app::OrbSpawnerSettingsOverride* this_ptr, app::OrbSpawner* spawner)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::OrbSpawnerSettingsOverride* this_ptr)
} // namespace app::classes::OrbSpawnerSettingsOverride
