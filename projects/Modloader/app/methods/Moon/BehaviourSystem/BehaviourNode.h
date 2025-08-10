#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Moon_BehaviourSystem_DecoratorNode_.h>
#include <Modloader/app/structs/Action_2_Moon_BehaviourSystem_TreeBehaviour_Exception_.h>
#include <Modloader/app/structs/BehaviourNode.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/DecoratorNode.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_DecoratorNode_.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_IUtilityProvider_.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/Nullable_1_Moon_BehaviourSystem_BehaviourStatus_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::BehaviourSystem::BehaviourNode {
    IL2CPP_REGISTER_METHOD(0x004E57A0, app::BehaviourStatus__Enum, get_Status, app::BehaviourNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E57B0, void, set_Status, app::BehaviourNode* this_ptr, app::BehaviourStatus__Enum value)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::Nullable_1_Moon_BehaviourSystem_BehaviourStatus_, get_ForceReturnTaskStatus, app::BehaviourNode* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FBBF0,
        void,
        set_ForceReturnTaskStatus,
        app::BehaviourNode* this_ptr,
        app::Nullable_1_Moon_BehaviourSystem_BehaviourStatus_ value
    )
    IL2CPP_REGISTER_METHOD(0x03004580, void, add_OnDecoratorAdded, app::BehaviourNode* this_ptr, app::Action_1_Moon_BehaviourSystem_DecoratorNode_* value)
    IL2CPP_REGISTER_METHOD(0x03004670, void, remove_OnDecoratorAdded, app::BehaviourNode* this_ptr, app::Action_1_Moon_BehaviourSystem_DecoratorNode_* value)
    IL2CPP_REGISTER_METHOD(0x03004760, void, add_OnDecoratorRemoved, app::BehaviourNode* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x03004850, void, remove_OnDecoratorRemoved, app::BehaviourNode* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(
        0x03004940,
        void,
        add_ExceptionThrown,
        app::BehaviourNode* this_ptr,
        app::Action_2_Moon_BehaviourSystem_TreeBehaviour_Exception_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x03004A30,
        void,
        remove_ExceptionThrown,
        app::BehaviourNode* this_ptr,
        app::Action_2_Moon_BehaviourSystem_TreeBehaviour_Exception_* value
    )
    IL2CPP_REGISTER_METHOD(0x03004B20, void, add_OnNodeExit, app::BehaviourNode* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x03004C10, void, remove_OnNodeExit, app::BehaviourNode* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::List_1_Moon_BehaviourSystem_DecoratorNode_*, get_Decorators, app::BehaviourNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03004D00, void, OnValidate, app::BehaviourNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03004E80, void, OnDestroy, app::BehaviourNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E85AB0, void, MoonCleanup, app::BehaviourNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03004EA0, void, AddDecorator, app::BehaviourNode* this_ptr, app::DecoratorNode* new_decorator)
    IL2CPP_REGISTER_METHOD(0x03004F90, bool, RemoveDecorator, app::BehaviourNode* this_ptr, app::DecoratorNode* node)
    IL2CPP_REGISTER_METHOD(0x03005080, bool, RemoveDecoratorAt, app::BehaviourNode* this_ptr, int32_t decorator_index)
    IL2CPP_REGISTER_METHOD(0x03005160, void, ClearDecorators, app::BehaviourNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03005220, void, EnterInternal, app::BehaviourNode* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x03005240, void, SetupDecorators, app::BehaviourNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030053D0, app::BehaviourStatus__Enum, Execute, app::BehaviourNode* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x030056C0, void, ExitInternal, app::BehaviourNode* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x03005700, void, SetForceReturnStatus, app::BehaviourNode* this_ptr, app::BehaviourStatus__Enum status)
    IL2CPP_REGISTER_METHOD(0x030057A0, void, Reset, app::BehaviourNode* this_ptr, app::IContext* context, bool recursively)
    IL2CPP_REGISTER_METHOD(0x03005920, app::String*, get_ProfExecute, app::BehaviourNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030059D0, void, InitializeBehaviourNode, app::BehaviourNode* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, app::BehaviourNode* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, app::BehaviourNode* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnReset, app::BehaviourNode* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBehaviourTreeInitialize, app::BehaviourNode* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x03005A00, int32_t, CompareTo, app::BehaviourNode* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x03005B70, void, PerformSanityCheck, app::BehaviourNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03005CA0, void, OnExceptionThrown, app::BehaviourNode* this_ptr, app::Exception* e)
    IL2CPP_REGISTER_METHOD(0x004E57A0, app::BehaviourStatus__Enum, get_TaskStatus, app::BehaviourNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E57B0, void, set_TaskStatus, app::BehaviourNode* this_ptr, app::BehaviourStatus__Enum value)
    IL2CPP_REGISTER_METHOD(0x030059D0, void, OnInitializeTask, app::BehaviourNode* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x02023C90, void, OnEnterTask, app::BehaviourNode* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x03005D70, void, OnExitTask, app::BehaviourNode* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x03005D90, void, OnResetTask, app::BehaviourNode* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x02997080, app::BehaviourStatus__Enum, OnExecuteTask, app::BehaviourNode* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x03005DB0, void, ctor, app::BehaviourNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015EBC30, app::Object*, GetDecorator, app::BehaviourNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0154ABD0, void, GetDecorators_1, app::BehaviourNode* this_ptr, app::List_1_System_Object_* list)
    IL2CPP_REGISTER_METHOD(0x0154ABD0, void, GetDecorators_2, app::BehaviourNode* this_ptr, app::List_1_Moon_BehaviourSystem_IUtilityProvider_* list)
} // namespace app::classes::Moon::BehaviourSystem::BehaviourNode
