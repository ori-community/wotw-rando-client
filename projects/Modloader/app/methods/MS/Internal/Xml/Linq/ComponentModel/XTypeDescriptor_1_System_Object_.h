#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XTypeDescriptor_1_System_Object_.h>
#include <Modloader/app/structs/Attribute__Array.h>
#include <Modloader/app/structs/ICustomTypeDescriptor.h>
#include <Modloader/app/structs/PropertyDescriptorCollection.h>

namespace app::classes::MS::Internal::Xml::Linq::ComponentModel::XTypeDescriptor_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x019D6B90, void, ctor, (app::XTypeDescriptor_1_System_Object_ * this_ptr, app::ICustomTypeDescriptor* parent))
    IL2CPP_REGISTER_METHOD(0x019F93B0, app::PropertyDescriptorCollection*, GetProperties_1, (app::XTypeDescriptor_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F93E0, app::PropertyDescriptorCollection*, GetProperties_2, (app::XTypeDescriptor_1_System_Object_ * this_ptr, app::Attribute__Array* attributes))
} // namespace app::classes::MS::Internal::Xml::Linq::ComponentModel::XTypeDescriptor_1_System_Object_
