#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/WeaponMasterEntity.h>
#include <Modloader/app/structs/WeaponMasterIdle.h>

namespace app::classes::WeaponMasterIdle {
    IL2CPP_REGISTER_METHOD(0x008E86A0, app::WeaponMasterEntity*, get_m_weaponMaster, app::WeaponMasterIdle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008E8780, void, OnEnable, app::WeaponMasterIdle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008E89F0, void, OnDisable, app::WeaponMasterIdle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008E8C60, void, LeftTree, app::WeaponMasterIdle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, OnExecuteTask, app::WeaponMasterIdle* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, app::WeaponMasterIdle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008E8C90, void, PlayTimeline, app::WeaponMasterIdle* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x008E8C60, void, OnEnterTask, app::WeaponMasterIdle* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x008E8EF0, void, OnExitTask, app::WeaponMasterIdle* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x008E9130, app::MoonTimeline*, GetIdleTimeline, app::WeaponMasterIdle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, app::WeaponMasterIdle* this_ptr)
} // namespace app::classes::WeaponMasterIdle
