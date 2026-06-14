#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_2_Object_Object_.h>
#include <Modloader/app/structs/DynamicMethod.h>
#include <Modloader/app/structs/DynamicReflectionDelegateFactory.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/Func_1_Object_.h>
#include <Modloader/app/structs/Func_2_Object_Object_.h>
#include <Modloader/app/structs/ILGenerator.h>
#include <Modloader/app/structs/MethodBase.h>
#include <Modloader/app/structs/MethodCall_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/ObjectConstructor_1_System_Object_.h>
#include <Modloader/app/structs/PropertyInfo_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::Newtonsoft::Json::Utilities::DynamicReflectionDelegateFactory {
    IL2CPP_REGISTER_METHOD(0x01C0C750, app::DynamicReflectionDelegateFactory*, get_Instance, )
    IL2CPP_REGISTER_METHOD(
        0x01C0C7F0,
        app::DynamicMethod*,
        CreateDynamicMethod,
        app::String* name,
        app::Type* return_type,
        app::Type__Array* parameter_types,
        app::Type* owner
    )
    IL2CPP_REGISTER_METHOD(
        0x01C0C900,
        app::ObjectConstructor_1_System_Object_*,
        CreateParameterizedConstructor,
        app::DynamicReflectionDelegateFactory* this_ptr,
        app::MethodBase* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x01C0CAA0,
        void,
        GenerateCreateMethodCallIL,
        app::DynamicReflectionDelegateFactory* this_ptr,
        app::MethodBase* method_1,
        app::ILGenerator* generator,
        int32_t args_index
    )
    IL2CPP_REGISTER_METHOD(
        0x01C0D900,
        void,
        GenerateCreateDefaultConstructorIL,
        app::DynamicReflectionDelegateFactory* this_ptr,
        app::Type* type,
        app::ILGenerator* generator,
        app::Type* delegate_type
    )
    IL2CPP_REGISTER_METHOD(
        0x01C0DBE0,
        void,
        GenerateCreateGetPropertyIL,
        app::DynamicReflectionDelegateFactory* this_ptr,
        app::PropertyInfo_1* property_info,
        app::ILGenerator* generator
    )
    IL2CPP_REGISTER_METHOD(
        0x01C0DDF0,
        void,
        GenerateCreateGetFieldIL,
        app::DynamicReflectionDelegateFactory* this_ptr,
        app::FieldInfo_1* field_info,
        app::ILGenerator* generator
    )
    IL2CPP_REGISTER_METHOD(0x01C0DF80, void, GenerateCreateSetFieldIL, app::FieldInfo_1* field_info, app::ILGenerator* generator)
    IL2CPP_REGISTER_METHOD(0x01C0E160, void, GenerateCreateSetPropertyIL, app::PropertyInfo_1* property_info, app::ILGenerator* generator)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DynamicReflectionDelegateFactory* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C0E2E0, void, cctor, )
    IL2CPP_REGISTER_METHOD(
        0x018F08F0,
        app::MethodCall_2_System_Object_System_Object_*,
        CreateMethodCall,
        app::DynamicReflectionDelegateFactory* this_ptr,
        app::MethodBase* method_1
    )
    IL2CPP_REGISTER_METHOD(0x02652B60, app::Func_1_Object_*, CreateDefaultConstructor, app::DynamicReflectionDelegateFactory* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(
        0x02653630,
        app::Func_2_Object_Object_*,
        CreateGet_1,
        app::DynamicReflectionDelegateFactory* this_ptr,
        app::PropertyInfo_1* property_info
    )
    IL2CPP_REGISTER_METHOD(0x02653250, app::Func_2_Object_Object_*, CreateGet_2, app::DynamicReflectionDelegateFactory* this_ptr, app::FieldInfo_1* field_info)
    IL2CPP_REGISTER_METHOD(
        0x018F13D0,
        app::Action_2_Object_Object_*,
        CreateSet_1,
        app::DynamicReflectionDelegateFactory* this_ptr,
        app::FieldInfo_1* field_info
    )
    IL2CPP_REGISTER_METHOD(
        0x018F15C0,
        app::Action_2_Object_Object_*,
        CreateSet_2,
        app::DynamicReflectionDelegateFactory* this_ptr,
        app::PropertyInfo_1* property_info
    )
} // namespace app::classes::Newtonsoft::Json::Utilities::DynamicReflectionDelegateFactory
