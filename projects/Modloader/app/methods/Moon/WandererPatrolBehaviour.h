#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WandererPatrolBehaviour.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::WandererPatrolBehaviour {
    IL2CPP_REGISTER_METHOD(0x011A3AB0, void, OnEntityInitialized, (app::WandererPatrolBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011A3C20, app::BehaviourStatus__Enum, OnExecute, (app::WandererPatrolBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::WandererPatrolBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, (app::WandererPatrolBehaviour * this_ptr))
} // namespace app::classes::Moon::WandererPatrolBehaviour
