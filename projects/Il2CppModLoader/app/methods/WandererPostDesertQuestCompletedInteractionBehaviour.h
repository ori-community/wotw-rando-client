#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::WandererPostDesertQuestCompletedInteractionBehaviour {
    IL2CPP_REGISTER_METHOD(0x008D18A0, void, OnEntityInitialized, (app::WandererPostDesertQuestCompletedInteractionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C6BC0, void, OnEnter, (app::WandererPostDesertQuestCompletedInteractionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x008D1A30, app::BehaviourStatus__Enum, OnExecute, (app::WandererPostDesertQuestCompletedInteractionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x008C6EF0, void, OnExit, (app::WandererPostDesertQuestCompletedInteractionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, (app::WandererPostDesertQuestCompletedInteractionBehaviour * this_ptr))
} // namespace app::classes::WandererPostDesertQuestCompletedInteractionBehaviour
