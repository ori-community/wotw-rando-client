#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AttributeCollection.h>
#include <Modloader/app/structs/Attribute__Array.h>
#include <Modloader/app/structs/EventDescriptorCollection.h>
#include <Modloader/app/structs/EventDescriptor_1.h>
#include <Modloader/app/structs/ICustomTypeDescriptor.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyDescriptor.h>
#include <Modloader/app/structs/PropertyDescriptorCollection.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeConverter.h>
#include <Modloader/app/structs/TypeDescriptor_MergedTypeDescriptor.h>

namespace app::classes::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor {
    IL2CPP_REGISTER_METHOD(
        0x0058DA40,
        void,
        ctor,
        app::TypeDescriptor_MergedTypeDescriptor* this_ptr,
        app::ICustomTypeDescriptor* primary,
        app::ICustomTypeDescriptor* secondary
    )
    IL2CPP_REGISTER_METHOD(0x029574D0, app::AttributeCollection*, ICustomTypeDescriptor_GetAttributes, app::TypeDescriptor_MergedTypeDescriptor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02957580, app::String*, ICustomTypeDescriptor_GetClassName, app::TypeDescriptor_MergedTypeDescriptor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02957640, app::String*, ICustomTypeDescriptor_GetComponentName, app::TypeDescriptor_MergedTypeDescriptor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02957700, app::TypeConverter*, ICustomTypeDescriptor_GetConverter, app::TypeDescriptor_MergedTypeDescriptor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029577B0, app::EventDescriptor_1*, ICustomTypeDescriptor_GetDefaultEvent, app::TypeDescriptor_MergedTypeDescriptor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02957860, app::PropertyDescriptor*, ICustomTypeDescriptor_GetDefaultProperty, app::TypeDescriptor_MergedTypeDescriptor* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02957910,
        app::Object*,
        ICustomTypeDescriptor_GetEditor,
        app::TypeDescriptor_MergedTypeDescriptor* this_ptr,
        app::Type* editor_base_type
    )
    IL2CPP_REGISTER_METHOD(0x02957A30, app::EventDescriptorCollection*, ICustomTypeDescriptor_GetEvents_1, app::TypeDescriptor_MergedTypeDescriptor* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02957AE0,
        app::EventDescriptorCollection*,
        ICustomTypeDescriptor_GetEvents_2,
        app::TypeDescriptor_MergedTypeDescriptor* this_ptr,
        app::Attribute__Array* attributes
    )
    IL2CPP_REGISTER_METHOD(
        0x02957BA0,
        app::PropertyDescriptorCollection*,
        ICustomTypeDescriptor_GetProperties_1,
        app::TypeDescriptor_MergedTypeDescriptor* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02957C50,
        app::PropertyDescriptorCollection*,
        ICustomTypeDescriptor_GetProperties_2,
        app::TypeDescriptor_MergedTypeDescriptor* this_ptr,
        app::Attribute__Array* attributes
    )
    IL2CPP_REGISTER_METHOD(
        0x02957D10,
        app::Object*,
        ICustomTypeDescriptor_GetPropertyOwner,
        app::TypeDescriptor_MergedTypeDescriptor* this_ptr,
        app::PropertyDescriptor* pd
    )
} // namespace app::classes::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor
