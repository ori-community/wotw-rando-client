#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WandererDesertQuestCompletedInteractionBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>

namespace app::classes::WandererDesertQuestCompletedInteractionBehaviour {
    IL2CPP_REGISTER_METHOD(0x008C6A30, void, OnEntityInitialized, (app::WandererDesertQuestCompletedInteractionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C6BC0, void, OnEnter, (app::WandererDesertQuestCompletedInteractionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x008C6BF0, app::BehaviourStatus__Enum, OnExecute, (app::WandererDesertQuestCompletedInteractionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x008C6EF0, void, OnExit, (app::WandererDesertQuestCompletedInteractionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, (app::WandererDesertQuestCompletedInteractionBehaviour * this_ptr))
} // namespace app::classes::WandererDesertQuestCompletedInteractionBehaviour
