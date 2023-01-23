#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TypeDescriptor_AttributeProvider_AttributeTypeDescriptor.h>
#include <Modloader/app/structs/Attribute__Array.h>
#include <Modloader/app/structs/ICustomTypeDescriptor.h>
#include <Modloader/app/structs/AttributeCollection.h>

namespace app::classes::System::ComponentModel::TypeDescriptor_AttributeProvider_AttributeTypeDescriptor {
    IL2CPP_REGISTER_METHOD(0x01A9AC30, void, ctor, (app::TypeDescriptor_AttributeProvider_AttributeTypeDescriptor * this_ptr, app::Attribute__Array* attrs, app::ICustomTypeDescriptor* parent))
    IL2CPP_REGISTER_METHOD(0x029561A0, app::AttributeCollection*, GetAttributes, (app::TypeDescriptor_AttributeProvider_AttributeTypeDescriptor * this_ptr))
} // namespace app::classes::System::ComponentModel::TypeDescriptor_AttributeProvider_AttributeTypeDescriptor
