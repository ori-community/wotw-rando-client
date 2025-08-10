#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/GasballExplosionBehaviour.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::GasballExplosionBehaviour {
    IL2CPP_REGISTER_METHOD(0x0041F950, void, OnEnterTask, app::GasballExplosionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0041FB20, app::BehaviourStatus__Enum, OnExecuteTask, app::GasballExplosionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0041FB50, void, OnExitTask, app::GasballExplosionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0041FD00, void, Explode, app::GasballExplosionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0041FDB0, void, ctor, app::GasballExplosionBehaviour* this_ptr)
} // namespace app::classes::GasballExplosionBehaviour
