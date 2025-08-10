#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourNode.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/BehaviourTree.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/IBehaviourNode.h>
#include <Modloader/app/structs/IBlackboard.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UpdateType__Enum.h>

namespace app::classes::Moon::BehaviourSystem::BehaviourTree {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_IsInitialized, app::BehaviourTree* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_IsInitialized, app::BehaviourTree* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::BehaviourNode*, get_Root, app::BehaviourTree* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Root, app::BehaviourTree* this_ptr, app::BehaviourNode* value)
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_WasUpdateSkipped, app::BehaviourTree* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::IBehaviourNode*, get_LastExecutedLeafNode, app::BehaviourTree* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_LastExecutedLeafNode, app::BehaviourTree* this_ptr, app::IBehaviourNode* value)
    IL2CPP_REGISTER_METHOD(0x005D8A80, bool, get_HasLastExecutedLeafNode, app::BehaviourTree* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006DC040, void, set_HasLastExecutedLeafNode, app::BehaviourTree* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x03006630, app::String*, get_SkippedUpdateReason, app::BehaviourTree* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IBlackboard*, get_Blackboard, app::BehaviourTree* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030066C0, app::BehaviourStatus__Enum, get_RootStatus, app::BehaviourTree* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030066E0, void, Awake, app::BehaviourTree* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030066F0, void, OnEnable, app::BehaviourTree* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030067A0, void, OnDisable, app::BehaviourTree* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03006850, void, OnDestroy, app::BehaviourTree* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03006870, void, Finalize, app::BehaviourTree* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03006850, void, MoonCleanup, app::BehaviourTree* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030068A0, void, Initialize, app::BehaviourTree* this_ptr, app::Component_1* agent)
    IL2CPP_REGISTER_METHOD(0x03006B50, void, CacheBlackboard, app::BehaviourTree* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03006C00, void, MarkForReset, app::BehaviourTree* this_ptr, app::IBehaviourNode* node)
    IL2CPP_REGISTER_METHOD(0x03006CB0, app::BehaviourStatus__Enum, Execute, app::BehaviourTree* this_ptr, app::IContext* context, bool update_whole_tree)
    IL2CPP_REGISTER_METHOD(0x03006E00, void, StartTree, app::BehaviourTree* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03006E10, void, StopTree, app::BehaviourTree* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03006E50, void, UpdateTree, app::BehaviourTree* this_ptr, app::Component_1* agent, bool update_whole_tree)
    IL2CPP_REGISTER_METHOD(0x03006E90, void, SkipTreeUpdate, app::BehaviourTree* this_ptr, app::String* reason)
    IL2CPP_REGISTER_METHOD(0x03006EA0, void, Reset_1, app::BehaviourTree* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x03006ED0, void, Reset_2, app::BehaviourTree* this_ptr, app::Component_1* agent)
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::UpdateType__Enum, get_UpdateType, app::BehaviourTree* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03006F20, void, OnUpdate, app::BehaviourTree* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x00615270, bool, get_IsRunning, app::BehaviourTree* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00674DC0, void, set_IsRunning, app::BehaviourTree* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x03006F50, void, SetLastExecutedLeafNode, app::BehaviourTree* this_ptr, app::IBehaviourNode* node)
    IL2CPP_REGISTER_METHOD(0x03006F60, void, ctor, app::BehaviourTree* this_ptr)
} // namespace app::classes::Moon::BehaviourSystem::BehaviourTree
