#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/WandererPostDesertQuestCompletedPatrolBehaviour.h>

namespace app::classes::WandererPostDesertQuestCompletedPatrolBehaviour {
    IL2CPP_REGISTER_METHOD(0x008D1D30, void, OnEntityInitialized, app::WandererPostDesertQuestCompletedPatrolBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008C6BC0, void, OnEnter, app::WandererPostDesertQuestCompletedPatrolBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(
        0x00420EE0,
        app::BehaviourStatus__Enum,
        OnExecute,
        app::WandererPostDesertQuestCompletedPatrolBehaviour* this_ptr,
        app::IContext* context
    )
    IL2CPP_REGISTER_METHOD(0x008C6EF0, void, OnExit, app::WandererPostDesertQuestCompletedPatrolBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, app::WandererPostDesertQuestCompletedPatrolBehaviour* this_ptr)
} // namespace app::classes::WandererPostDesertQuestCompletedPatrolBehaviour
