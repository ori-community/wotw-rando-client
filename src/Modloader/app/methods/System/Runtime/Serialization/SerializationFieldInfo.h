#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Binder.h>
#include <Modloader/app/structs/BindingFlags__Enum.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/FieldAttributes__Enum.h>
#include <Modloader/app/structs/Module.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/RuntimeFieldHandle.h>
#include <Modloader/app/structs/RuntimeFieldInfo.h>
#include <Modloader/app/structs/SerializationFieldInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Runtime::Serialization::SerializationFieldInfo {
    IL2CPP_REGISTER_METHOD(0x017171B0, app::Module*, get_Module, app::SerializationFieldInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717180, int32_t, get_MetadataToken, app::SerializationFieldInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EDE320, void, ctor, app::SerializationFieldInfo* this_ptr, app::RuntimeFieldInfo* field, app::String* name_prefix)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Name, app::SerializationFieldInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717090, app::Type*, get_DeclaringType, app::SerializationFieldInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00442880, app::Type*, get_ReflectedType, app::SerializationFieldInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EDE3F0, app::Object__Array*, GetCustomAttributes_1, app::SerializationFieldInfo* this_ptr, bool inherit)
    IL2CPP_REGISTER_METHOD(
        0x01EDE420,
        app::Object__Array*,
        GetCustomAttributes_2,
        app::SerializationFieldInfo* this_ptr,
        app::Type* attribute_type,
        bool inherit
    )
    IL2CPP_REGISTER_METHOD(0x01EDE450, bool, IsDefined, app::SerializationFieldInfo* this_ptr, app::Type* attribute_type, bool inherit)
    IL2CPP_REGISTER_METHOD(0x01EDE480, app::Type*, get_FieldType, app::SerializationFieldInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01852620, app::Object*, GetValue, app::SerializationFieldInfo* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01EDE4B0, app::Object*, InternalGetValue, app::SerializationFieldInfo* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(
        0x01EDE5F0,
        void,
        SetValue,
        app::SerializationFieldInfo* this_ptr,
        app::Object* obj,
        app::Object* value,
        app::BindingFlags__Enum invoke_attr,
        app::Binder* binder,
        app::CultureInfo* culture
    )
    IL2CPP_REGISTER_METHOD(
        0x01EDE620,
        void,
        InternalSetValue,
        app::SerializationFieldInfo* this_ptr,
        app::Object* obj,
        app::Object* value,
        app::BindingFlags__Enum invoke_attr,
        app::Binder* binder,
        app::CultureInfo* culture
    )
    IL2CPP_REGISTER_METHOD(0x002FA280, app::RuntimeFieldInfo*, get_FieldInfo, app::SerializationFieldInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717210, app::RuntimeFieldHandle, get_FieldHandle, app::SerializationFieldInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017171E0, app::FieldAttributes__Enum, get_Attributes, app::SerializationFieldInfo* this_ptr)
} // namespace app::classes::System::Runtime::Serialization::SerializationFieldInfo
