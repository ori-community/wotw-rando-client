#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AttributeCollection.h>
#include <Modloader/app/structs/Attribute__Array.h>
#include <Modloader/app/structs/CustomTypeDescriptor.h>
#include <Modloader/app/structs/EventDescriptorCollection.h>
#include <Modloader/app/structs/EventDescriptor_1.h>
#include <Modloader/app/structs/ICustomTypeDescriptor.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyDescriptor.h>
#include <Modloader/app/structs/PropertyDescriptorCollection.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeConverter.h>

namespace app::classes::System::ComponentModel::CustomTypeDescriptor {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, app::CustomTypeDescriptor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, app::CustomTypeDescriptor* this_ptr, app::ICustomTypeDescriptor* parent)
    IL2CPP_REGISTER_METHOD(0x01FDD960, app::AttributeCollection*, GetAttributes, app::CustomTypeDescriptor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FDDA20, app::String*, GetClassName, app::CustomTypeDescriptor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FDDAC0, app::String*, GetComponentName, app::CustomTypeDescriptor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FDDB60, app::TypeConverter*, GetConverter, app::CustomTypeDescriptor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FDDCC0, app::EventDescriptor_1*, GetDefaultEvent, app::CustomTypeDescriptor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FDDD50, app::PropertyDescriptor*, GetDefaultProperty, app::CustomTypeDescriptor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FDDDE0, app::Object*, GetEditor, app::CustomTypeDescriptor* this_ptr, app::Type* editor_base_type)
    IL2CPP_REGISTER_METHOD(0x01FDDE90, app::EventDescriptorCollection*, GetEvents_1, app::CustomTypeDescriptor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FDDF50, app::EventDescriptorCollection*, GetEvents_2, app::CustomTypeDescriptor* this_ptr, app::Attribute__Array* attributes)
    IL2CPP_REGISTER_METHOD(0x01FDE020, app::PropertyDescriptorCollection*, GetProperties_1, app::CustomTypeDescriptor* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01FDE0E0,
        app::PropertyDescriptorCollection*,
        GetProperties_2,
        app::CustomTypeDescriptor* this_ptr,
        app::Attribute__Array* attributes
    )
    IL2CPP_REGISTER_METHOD(0x01FDE1B0, app::Object*, GetPropertyOwner, app::CustomTypeDescriptor* this_ptr, app::PropertyDescriptor* pd)
} // namespace app::classes::System::ComponentModel::CustomTypeDescriptor
