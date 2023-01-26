#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GasBallSpawnTask.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::GasBallSpawnTask {
    IL2CPP_REGISTER_METHOD(0x00419300, void, OnEnterTask, (app::GasBallSpawnTask * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00419920, app::BehaviourStatus__Enum, OnExecuteTask, (app::GasBallSpawnTask * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00419D60, void, SetActivateDamageDealers, (app::GasBallSpawnTask * this_ptr, bool activate))
    IL2CPP_REGISTER_METHOD(0x00419E40, void, StartMoving, (app::GasBallSpawnTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00419FA0, void, ctor, (app::GasBallSpawnTask * this_ptr))
} // namespace app::classes::GasBallSpawnTask
