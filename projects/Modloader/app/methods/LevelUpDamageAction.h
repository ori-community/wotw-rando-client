#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LevelUpDamageAction.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::LevelUpDamageAction {
    IL2CPP_REGISTER_METHOD(0x01132D30, void, Perform, (app::LevelUpDamageAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01132D40, void, Awake, (app::LevelUpDamageAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01132DE0, void, OnDestroy, (app::LevelUpDamageAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01132E80, void, FixedUpdate, (app::LevelUpDamageAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F2320, bool, get_IsSuspended, (app::LevelUpDamageAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F2330, void, set_IsSuspended, (app::LevelUpDamageAction * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FD750, app::SuspendableMask__Enum, get_Mask, (app::LevelUpDamageAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011335D0, void, set_Mask, (app::LevelUpDamageAction * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x01133680, void, ctor, (app::LevelUpDamageAction * this_ptr))
} // namespace app::classes::LevelUpDamageAction
