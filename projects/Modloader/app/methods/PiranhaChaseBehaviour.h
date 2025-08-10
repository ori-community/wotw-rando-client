#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/PiranhaChaseBehaviour.h>

namespace app::classes::PiranhaChaseBehaviour {
    IL2CPP_REGISTER_METHOD(0x0115D4E0, void, OnEntityInitialized, app::PiranhaChaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0115D590, void, OnEnter, app::PiranhaChaseBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0115D870, app::BehaviourStatus__Enum, OnExecute, app::PiranhaChaseBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0115DB00, void, ctor, app::PiranhaChaseBehaviour* this_ptr)
} // namespace app::classes::PiranhaChaseBehaviour
