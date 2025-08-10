#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool.h>
#include <Modloader/app/structs/BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry.h>
#include <Modloader/app/structs/Entity.h>

namespace app::classes::BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool {
    IL2CPP_REGISTER_METHOD(
        0x00F9CF60,
        app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry*,
        GetEntry,
        app::BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool* this_ptr,
        app::Entity* entity
    )
    IL2CPP_REGISTER_METHOD(
        0x00F9D0F0,
        void,
        ReturnToPool,
        app::BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool* this_ptr,
        app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry* entry
    )
    IL2CPP_REGISTER_METHOD(0x00F9D1A0, void, ctor, app::BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool* this_ptr)
} // namespace app::classes::BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool
