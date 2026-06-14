#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IDictionary_2_System_String_Newtonsoft_Json_Utilities_ReflectionMember_.h>
#include <Modloader/app/structs/MethodBase.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectConstructor_1_System_Object_.h>
#include <Modloader/app/structs/ReflectionObject.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Newtonsoft::Json::Utilities::ReflectionObject {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::ObjectConstructor_1_System_Object_*, get_Creator, app::ReflectionObject* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FB930,
        app::IDictionary_2_System_String_Newtonsoft_Json_Utilities_ReflectionMember_*,
        get_Members,
        app::ReflectionObject* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0301F4C0, void, ctor, app::ReflectionObject* this_ptr, app::ObjectConstructor_1_System_Object_* creator)
    IL2CPP_REGISTER_METHOD(0x0301F650, app::Object*, GetValue, app::ReflectionObject* this_ptr, app::Object* target, app::String* member)
    IL2CPP_REGISTER_METHOD(0x0301F720, void, SetValue, app::ReflectionObject* this_ptr, app::Object* target, app::String* member, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0301F800, app::Type*, GetType, app::ReflectionObject* this_ptr, app::String* member)
    IL2CPP_REGISTER_METHOD(0x0301F8B0, app::ReflectionObject*, Create_1, app::Type* t, app::String__Array* member_names)
    IL2CPP_REGISTER_METHOD(0x0301F8C0, app::ReflectionObject*, Create_2, app::Type* t, app::MethodBase* creator, app::String__Array* member_names)
} // namespace app::classes::Newtonsoft::Json::Utilities::ReflectionObject
