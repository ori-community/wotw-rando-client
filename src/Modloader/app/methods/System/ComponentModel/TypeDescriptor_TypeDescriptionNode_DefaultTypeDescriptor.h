#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AttributeCollection.h>
#include <Modloader/app/structs/Attribute__Array.h>
#include <Modloader/app/structs/EventDescriptorCollection.h>
#include <Modloader/app/structs/EventDescriptor_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyDescriptor.h>
#include <Modloader/app/structs/PropertyDescriptorCollection.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeConverter.h>
#include <Modloader/app/structs/TypeDescriptor_TypeDescriptionNode.h>
#include <Modloader/app/structs/TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Boxed.h>

namespace app::classes::System::ComponentModel::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor {
    IL2CPP_REGISTER_METHOD(
        0x0013C860,
        void,
        ctor,
        app::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Boxed* this_ptr,
        app::TypeDescriptor_TypeDescriptionNode* node,
        app::Type* object_type,
        app::Object* instance
    )
    IL2CPP_REGISTER_METHOD(
        0x00216250,
        app::AttributeCollection*,
        ICustomTypeDescriptor_GetAttributes,
        app::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00216260,
        app::String*,
        ICustomTypeDescriptor_GetClassName,
        app::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00216270,
        app::String*,
        ICustomTypeDescriptor_GetComponentName,
        app::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00216280,
        app::TypeConverter*,
        ICustomTypeDescriptor_GetConverter,
        app::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00216290,
        app::EventDescriptor_1*,
        ICustomTypeDescriptor_GetDefaultEvent,
        app::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x002162A0,
        app::PropertyDescriptor*,
        ICustomTypeDescriptor_GetDefaultProperty,
        app::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x002162B0,
        app::Object*,
        ICustomTypeDescriptor_GetEditor,
        app::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Boxed* this_ptr,
        app::Type* editor_base_type
    )
    IL2CPP_REGISTER_METHOD(
        0x002162C0,
        app::EventDescriptorCollection*,
        ICustomTypeDescriptor_GetEvents_1,
        app::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x002162D0,
        app::EventDescriptorCollection*,
        ICustomTypeDescriptor_GetEvents_2,
        app::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Boxed* this_ptr,
        app::Attribute__Array* attributes
    )
    IL2CPP_REGISTER_METHOD(
        0x002162E0,
        app::PropertyDescriptorCollection*,
        ICustomTypeDescriptor_GetProperties_1,
        app::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x002162F0,
        app::PropertyDescriptorCollection*,
        ICustomTypeDescriptor_GetProperties_2,
        app::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Boxed* this_ptr,
        app::Attribute__Array* attributes
    )
    IL2CPP_REGISTER_METHOD(
        0x00216300,
        app::Object*,
        ICustomTypeDescriptor_GetPropertyOwner,
        app::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Boxed* this_ptr,
        app::PropertyDescriptor* pd
    )
} // namespace app::classes::System::ComponentModel::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor
