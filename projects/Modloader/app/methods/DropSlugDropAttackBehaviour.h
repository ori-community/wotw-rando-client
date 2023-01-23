#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DropSlugDropAttackBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>

namespace app::classes::DropSlugDropAttackBehaviour {
    IL2CPP_REGISTER_METHOD(0x00BE10A0, void, OnEntityInitialized, (app::DropSlugDropAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BE1150, void, OnEnter, (app::DropSlugDropAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00417920, app::BehaviourStatus__Enum, OnExecute, (app::DropSlugDropAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00BE1280, void, ctor, (app::DropSlugDropAttackBehaviour * this_ptr))
} // namespace app::classes::DropSlugDropAttackBehaviour
