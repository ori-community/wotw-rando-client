#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Blackboard_BlackboardMoonTypes.h>
#include <Modloader/app/structs/BlackboardVariableBool.h>
#include <Modloader/app/structs/BlackboardVariableFloat.h>
#include <Modloader/app/structs/BlackboardVariableGameObject.h>
#include <Modloader/app/structs/BlackboardVariableInt.h>
#include <Modloader/app/structs/BlackboardVariableObject.h>
#include <Modloader/app/structs/BlackboardVariableString.h>
#include <Modloader/app/structs/BlackboardVariableVector3.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_BlackboardVariableBool_.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_BlackboardVariableFloat_.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_BlackboardVariableGameObject_.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_BlackboardVariableInt_.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_BlackboardVariableObject_.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_BlackboardVariableString_.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_BlackboardVariableVector3_.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Moon::BehaviourSystem::Blackboard_BlackboardMoonTypes {
    IL2CPP_REGISTER_METHOD(0x03008720, void, AddVariable, (app::Blackboard_BlackboardMoonTypes * this_ptr, app::String* var_name, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x03008B00, void, RemoveVariable, (app::Blackboard_BlackboardMoonTypes * this_ptr, app::String* var_name))
    IL2CPP_REGISTER_METHOD(0x03008C20, int32_t, GetUniqueId, (app::Blackboard_BlackboardMoonTypes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03008F00, bool, DoesIDAlreadyExist_1, (app::Blackboard_BlackboardMoonTypes * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x03009050, void, Merge, (app::Blackboard_BlackboardMoonTypes * this_ptr, app::Blackboard_BlackboardMoonTypes* other))
    IL2CPP_REGISTER_METHOD(0x03009580, void, ctor, (app::Blackboard_BlackboardMoonTypes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015EBDA0, app::Object*, GetNewVariable_1, (app::Blackboard_BlackboardMoonTypes * this_ptr, app::String* var_name, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x018F32B0, bool, DoesIDAlreadyExist_2, (app::Blackboard_BlackboardMoonTypes * this_ptr, int32_t id, app::List_1_System_Object_* list))
    IL2CPP_REGISTER_METHOD(0x0154B3B0, void, RemoveVariableFromList_1, (app::Blackboard_BlackboardMoonTypes * this_ptr, app::String* var_name, app::List_1_System_Object_* list))
    IL2CPP_REGISTER_METHOD(0x0154AFE0, void, MergeLists_1, (app::Blackboard_BlackboardMoonTypes * this_ptr, app::List_1_System_Object_* one, app::List_1_System_Object_* two))
    IL2CPP_REGISTER_METHOD(0x015EBDA0, app::BlackboardVariableInt*, GetNewVariable_2, (app::Blackboard_BlackboardMoonTypes * this_ptr, app::String* var_name, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x015EBDA0, app::BlackboardVariableBool*, GetNewVariable_3, (app::Blackboard_BlackboardMoonTypes * this_ptr, app::String* var_name, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x015EBDA0, app::BlackboardVariableFloat*, GetNewVariable_4, (app::Blackboard_BlackboardMoonTypes * this_ptr, app::String* var_name, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x015EBDA0, app::BlackboardVariableVector3*, GetNewVariable_5, (app::Blackboard_BlackboardMoonTypes * this_ptr, app::String* var_name, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x015EBDA0, app::BlackboardVariableGameObject*, GetNewVariable_6, (app::Blackboard_BlackboardMoonTypes * this_ptr, app::String* var_name, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x015EBDA0, app::BlackboardVariableObject*, GetNewVariable_7, (app::Blackboard_BlackboardMoonTypes * this_ptr, app::String* var_name, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x015EBDA0, app::BlackboardVariableString*, GetNewVariable_8, (app::Blackboard_BlackboardMoonTypes * this_ptr, app::String* var_name, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x0154B3B0, void, RemoveVariableFromList_2, (app::Blackboard_BlackboardMoonTypes * this_ptr, app::String* var_name, app::List_1_Moon_BehaviourSystem_BlackboardVariableBool_* list))
    IL2CPP_REGISTER_METHOD(0x0154B3B0, void, RemoveVariableFromList_3, (app::Blackboard_BlackboardMoonTypes * this_ptr, app::String* var_name, app::List_1_Moon_BehaviourSystem_BlackboardVariableInt_* list))
    IL2CPP_REGISTER_METHOD(0x0154B3B0, void, RemoveVariableFromList_4, (app::Blackboard_BlackboardMoonTypes * this_ptr, app::String* var_name, app::List_1_Moon_BehaviourSystem_BlackboardVariableFloat_* list))
    IL2CPP_REGISTER_METHOD(0x0154B3B0, void, RemoveVariableFromList_5, (app::Blackboard_BlackboardMoonTypes * this_ptr, app::String* var_name, app::List_1_Moon_BehaviourSystem_BlackboardVariableString_* list))
    IL2CPP_REGISTER_METHOD(0x0154B3B0, void, RemoveVariableFromList_6, (app::Blackboard_BlackboardMoonTypes * this_ptr, app::String* var_name, app::List_1_Moon_BehaviourSystem_BlackboardVariableVector3_* list))
    IL2CPP_REGISTER_METHOD(0x0154B3B0, void, RemoveVariableFromList_7, (app::Blackboard_BlackboardMoonTypes * this_ptr, app::String* var_name, app::List_1_Moon_BehaviourSystem_BlackboardVariableGameObject_* list))
    IL2CPP_REGISTER_METHOD(0x0154B3B0, void, RemoveVariableFromList_8, (app::Blackboard_BlackboardMoonTypes * this_ptr, app::String* var_name, app::List_1_Moon_BehaviourSystem_BlackboardVariableObject_* list))
    IL2CPP_REGISTER_METHOD(0x018F32B0, bool, DoesIDAlreadyExist_3, (app::Blackboard_BlackboardMoonTypes * this_ptr, int32_t id, app::List_1_Moon_BehaviourSystem_BlackboardVariableBool_* list))
    IL2CPP_REGISTER_METHOD(0x018F32B0, bool, DoesIDAlreadyExist_4, (app::Blackboard_BlackboardMoonTypes * this_ptr, int32_t id, app::List_1_Moon_BehaviourSystem_BlackboardVariableInt_* list))
    IL2CPP_REGISTER_METHOD(0x018F32B0, bool, DoesIDAlreadyExist_5, (app::Blackboard_BlackboardMoonTypes * this_ptr, int32_t id, app::List_1_Moon_BehaviourSystem_BlackboardVariableFloat_* list))
    IL2CPP_REGISTER_METHOD(0x018F32B0, bool, DoesIDAlreadyExist_6, (app::Blackboard_BlackboardMoonTypes * this_ptr, int32_t id, app::List_1_Moon_BehaviourSystem_BlackboardVariableString_* list))
    IL2CPP_REGISTER_METHOD(0x018F32B0, bool, DoesIDAlreadyExist_7, (app::Blackboard_BlackboardMoonTypes * this_ptr, int32_t id, app::List_1_Moon_BehaviourSystem_BlackboardVariableVector3_* list))
    IL2CPP_REGISTER_METHOD(0x018F32B0, bool, DoesIDAlreadyExist_8, (app::Blackboard_BlackboardMoonTypes * this_ptr, int32_t id, app::List_1_Moon_BehaviourSystem_BlackboardVariableGameObject_* list))
    IL2CPP_REGISTER_METHOD(0x018F32B0, bool, DoesIDAlreadyExist_9, (app::Blackboard_BlackboardMoonTypes * this_ptr, int32_t id, app::List_1_Moon_BehaviourSystem_BlackboardVariableObject_* list))
    IL2CPP_REGISTER_METHOD(0x0154AD70, void, MergeLists_2, (app::Blackboard_BlackboardMoonTypes * this_ptr, app::List_1_Moon_BehaviourSystem_BlackboardVariableBool_* one, app::List_1_Moon_BehaviourSystem_BlackboardVariableBool_* two))
    IL2CPP_REGISTER_METHOD(0x0154AEB0, void, MergeLists_3, (app::Blackboard_BlackboardMoonTypes * this_ptr, app::List_1_Moon_BehaviourSystem_BlackboardVariableInt_* one, app::List_1_Moon_BehaviourSystem_BlackboardVariableInt_* two))
    IL2CPP_REGISTER_METHOD(0x0154B120, void, MergeLists_4, (app::Blackboard_BlackboardMoonTypes * this_ptr, app::List_1_Moon_BehaviourSystem_BlackboardVariableFloat_* one, app::List_1_Moon_BehaviourSystem_BlackboardVariableFloat_* two))
    IL2CPP_REGISTER_METHOD(0x0154AFE0, void, MergeLists_5, (app::Blackboard_BlackboardMoonTypes * this_ptr, app::List_1_Moon_BehaviourSystem_BlackboardVariableString_* one, app::List_1_Moon_BehaviourSystem_BlackboardVariableString_* two))
    IL2CPP_REGISTER_METHOD(0x0154B250, void, MergeLists_6, (app::Blackboard_BlackboardMoonTypes * this_ptr, app::List_1_Moon_BehaviourSystem_BlackboardVariableVector3_* one, app::List_1_Moon_BehaviourSystem_BlackboardVariableVector3_* two))
    IL2CPP_REGISTER_METHOD(0x0154AFE0, void, MergeLists_7, (app::Blackboard_BlackboardMoonTypes * this_ptr, app::List_1_Moon_BehaviourSystem_BlackboardVariableGameObject_* one, app::List_1_Moon_BehaviourSystem_BlackboardVariableGameObject_* two))
    IL2CPP_REGISTER_METHOD(0x0154AFE0, void, MergeLists_8, (app::Blackboard_BlackboardMoonTypes * this_ptr, app::List_1_Moon_BehaviourSystem_BlackboardVariableObject_* one, app::List_1_Moon_BehaviourSystem_BlackboardVariableObject_* two))
    IL2CPP_REGISTER_METHOD(0x0154AD70, void, MergeLists_9, (app::Blackboard_BlackboardMoonTypes * this_ptr, app::List_1_System_Object_* one, app::List_1_System_Object_* two))
    IL2CPP_REGISTER_METHOD(0x0154AEB0, void, MergeLists_10, (app::Blackboard_BlackboardMoonTypes * this_ptr, app::List_1_System_Object_* one, app::List_1_System_Object_* two))
    IL2CPP_REGISTER_METHOD(0x0154B120, void, MergeLists_11, (app::Blackboard_BlackboardMoonTypes * this_ptr, app::List_1_System_Object_* one, app::List_1_System_Object_* two))
    IL2CPP_REGISTER_METHOD(0x0154B250, void, MergeLists_12, (app::Blackboard_BlackboardMoonTypes * this_ptr, app::List_1_System_Object_* one, app::List_1_System_Object_* two))
} // namespace app::classes::Moon::BehaviourSystem::Blackboard_BlackboardMoonTypes
