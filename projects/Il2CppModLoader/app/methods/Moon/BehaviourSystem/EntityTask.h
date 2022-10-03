#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::BehaviourSystem::EntityTask {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Entity*, get_Entity, (app::EntityTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::List_1_Moon_BehaviourSystem_EntityTask_*, get_Children, (app::EntityTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::EntityBehaviourDebugData*, get_DebugData, (app::EntityTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004E57A0, app::BehaviourStatus__Enum, get_TaskStatus, (app::EntityTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CB6570, void, set_TaskStatus, (app::EntityTask * this_ptr, app::BehaviourStatus__Enum value))
    IL2CPP_REGISTER_METHOD(0x00CB65C0, app::Nullable_1_Moon_BehaviourSystem_BehaviourStatus_, get_ForceReturnTaskStatus, (app::EntityTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CB65D0, void, set_ForceReturnTaskStatus, (app::EntityTask * this_ptr, app::Nullable_1_Moon_BehaviourSystem_BehaviourStatus_ value))
    IL2CPP_REGISTER_METHOD(0x00672040, bool, get_IsRunningOrBlocking, (app::EntityTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, app::EntityOwnedInitOrder__Enum, get_InitOrder, (app::EntityTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CB65E0, void, OnInitializeTask, (app::EntityTask * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterTask, (app::EntityTask * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitTask, (app::EntityTask * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (app::EntityTask * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldPauseLocomotionIsConstant, (app::EntityTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CB66D0, void, OnEntityInitialization, (app::EntityTask * this_ptr, app::Entity* entity))
    IL2CPP_REGISTER_METHOD(0x00CB6830, void, EndTask, (app::EntityTask * this_ptr, app::BehaviourStatus__Enum status))
    IL2CPP_REGISTER_METHOD(0x00CB68D0, void, InternalExit, (app::EntityTask * this_ptr, app::BehaviourStatus__Enum end_status))
    IL2CPP_REGISTER_METHOD(0x00CB6AB0, void, ExecuteChildTask, (app::EntityTask * this_ptr, app::EntityTask* task))
    IL2CPP_REGISTER_METHOD(0x00CB6CC0, void, OnEndChildBehaviour, (app::EntityTask * this_ptr, app::EntityTask* task, app::BehaviourStatus__Enum reason))
    IL2CPP_REGISTER_METHODINFO(0x0476F980, EntityTask_OnEndChildBehaviour__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00CB6DA0, void, ctor, (app::EntityTask * this_ptr))
} // namespace app::classes::Moon::BehaviourSystem::EntityTask
