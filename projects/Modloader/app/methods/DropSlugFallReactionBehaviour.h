#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DropSlugFallReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00BE3F80, void, OnInitializeTask, (app::DropSlugFallReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00BE4080, void, OnEnterTask, (app::DropSlugFallReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00BE42F0, app::BehaviourStatus__Enum, OnExecuteTask, (app::DropSlugFallReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00BE4380, void, SetSpinAnimationParameter, (app::DropSlugFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BE4570, void, CollisionUpdate, (app::DropSlugFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BE45B0, void, OnExitTask, (app::DropSlugFallReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00BE47E0, void, OnNativeCollision, (app::DropSlugFallReactionBehaviour * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHODINFO(0x04792208, DropSlugFallReactionBehaviour_OnNativeCollision__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00733FD0, void, ctor, (app::DropSlugFallReactionBehaviour * this_ptr))
} // namespace app::classes::DropSlugFallReactionBehaviour
