#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AllEnemiesKilledTrigger.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/VirtualTimelineRepresentationGroup__Enum.h>

namespace app::classes::AllEnemiesKilledTrigger {
    IL2CPP_REGISTER_METHOD(0x004F2830, void, OnValidate, (app::AllEnemiesKilledTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F2C20, void, Awake, (app::AllEnemiesKilledTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F2DD0, void, OnDestroy, (app::AllEnemiesKilledTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F2F80, void, OnPreRestoreCheckpoint, (app::AllEnemiesKilledTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F2F90, void, Serialize, (app::AllEnemiesKilledTrigger * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x004F30B0, void, ResetCount, (app::AllEnemiesKilledTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F30D0, void, RefreshCount, (app::AllEnemiesKilledTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F3470, void, OnTriggerEnable, (app::AllEnemiesKilledTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F34A0, void, OnTriggerDisable, (app::AllEnemiesKilledTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F34B0, void, Init, (app::AllEnemiesKilledTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F3630, void, RegisterEvent, (app::AllEnemiesKilledTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F3E90, void, DeregisterEvent, (app::AllEnemiesKilledTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4570, void, EntityKilled_1, (app::AllEnemiesKilledTrigger * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x004F4570, void, EntityKilled_2, (app::AllEnemiesKilledTrigger * this_ptr, app::DamageResult damage))
    IL2CPP_REGISTER_METHOD(0x004F4580, void, EnemyKilled, (app::AllEnemiesKilledTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4740, bool, IsFulfilled, (app::AllEnemiesKilledTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, get_VirtualTimelineTarget, (app::AllEnemiesKilledTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, app::VirtualTimelineRepresentationGroup__Enum, get_VirtualTimelineGroup, (app::AllEnemiesKilledTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F47C0, app::String*, get_NameDisplayedOnClip, (app::AllEnemiesKilledTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4840, void, ctor, (app::AllEnemiesKilledTrigger * this_ptr))
} // namespace app::classes::AllEnemiesKilledTrigger
