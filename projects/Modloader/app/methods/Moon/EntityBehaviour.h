#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_2_Moon_IEntityBehaviour_Moon_EntityBehaviourStatus_.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityBehaviour.h>
#include <Modloader/app/structs/EntityBehaviourDebugData.h>
#include <Modloader/app/structs/EntityBehaviourStatus__Enum.h>
#include <Modloader/app/structs/EntityOwnedInitOrder__Enum.h>
#include <Modloader/app/structs/IBlackboard.h>
#include <Modloader/app/structs/IEntityBehaviour.h>
#include <Modloader/app/structs/List_1_Moon_IEntityBehaviour_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Moon::EntityBehaviour {
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::EntityBehaviourDebugData*, get_DebugData, app::EntityBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C6660, app::EntityBehaviourStatus__Enum, get_Status, app::EntityBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00996540, bool, get_IsRunning, app::EntityBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0121D360, bool, get_IsInterrupted, app::EntityBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0121D370, bool, get_Succeded, app::EntityBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0121D380, bool, get_ShouldPauseTree, app::EntityBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0121D4A0, bool, get_ShouldPauseLocomotion, app::EntityBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::Entity*, get_Entity, app::EntityBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::List_1_Moon_IEntityBehaviour_*, get_Children, app::EntityBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417FF0, float, get_Utility, app::EntityBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::Object*, get_ExecutingObject, app::EntityBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_ExecutingObject, app::EntityBehaviour* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x002FB9B0,
        app::Action_2_Moon_IEntityBehaviour_Moon_EntityBehaviourStatus_*,
        get_OnEndBehaviourEvent,
        app::EntityBehaviour* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x002FB9C0,
        void,
        set_OnEndBehaviourEvent,
        app::EntityBehaviour* this_ptr,
        app::Action_2_Moon_IEntityBehaviour_Moon_EntityBehaviourStatus_* value
    )
    IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_BehaviourTime, app::EntityBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00449EB0, void, set_BehaviourTime, app::EntityBehaviour* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0121D5C0, void, OnEntityInitialization, app::EntityBehaviour* this_ptr, app::Entity* entity)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::EntityOwnedInitOrder__Enum, get_InitOrder, app::EntityBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0121D730, void, Execute, app::EntityBehaviour* this_ptr, app::IBlackboard* blackboard)
    IL2CPP_REGISTER_METHOD(0x0121D950, void, UpdateBehaviour, app::EntityBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0121D9D0, void, Interrupt, app::EntityBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0121DA90, void, EndBehaviour, app::EntityBehaviour* this_ptr, bool success)
    IL2CPP_REGISTER_METHOD(0x0121DB70, void, ExecuteChildBehaviour, app::EntityBehaviour* this_ptr, app::IEntityBehaviour* behaviour)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, InterruptChildBehaviour, app::EntityBehaviour* this_ptr, app::IEntityBehaviour* behaviour)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, GetShouldPauseTree, app::EntityBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, GetShouldPauseLocomotion, app::EntityBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, app::EntityBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExecute, app::EntityBehaviour* this_ptr, app::IBlackboard* blackboard)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdateBehaviour, app::EntityBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEndBehaviour, app::EntityBehaviour* this_ptr, app::EntityBehaviourStatus__Enum reason)
    IL2CPP_REGISTER_METHOD(0x0121DD70, void, InterruptChildren, app::EntityBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0121DE10,
        void,
        OnEndChildBehaviour,
        app::EntityBehaviour* this_ptr,
        app::IEntityBehaviour* behaviour,
        app::EntityBehaviourStatus__Enum reason
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PrintStatus, app::EntityBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0121DF00, void, ctor, app::EntityBehaviour* this_ptr)
} // namespace app::classes::Moon::EntityBehaviour
