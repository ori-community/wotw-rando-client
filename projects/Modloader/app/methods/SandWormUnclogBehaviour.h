#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SandWormUnclogBehaviour.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SandWormSandDigLocomotionBehaviour_SpeedEntry.h>

namespace app::classes::SandWormUnclogBehaviour {
    IL2CPP_REGISTER_METHOD(0x00603D60, bool, get_IsWaterWorm, (app::SandWormUnclogBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00603D70, void, set_IsWaterWorm, (app::SandWormUnclogBehaviour * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00C27890, void, OnEntityInitialized, (app::SandWormUnclogBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C27960, void, OnEnter, (app::SandWormUnclogBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00C28150, app::BehaviourStatus__Enum, OnExecute, (app::SandWormUnclogBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00C28720, void, OnExit, (app::SandWormUnclogBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00C28770, app::SandWormSandDigLocomotionBehaviour_SpeedEntry, GetSpeedSetting, (app::SandWormUnclogBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C28790, void, ctor, (app::SandWormUnclogBehaviour * this_ptr))
} // namespace app::classes::SandWormUnclogBehaviour
