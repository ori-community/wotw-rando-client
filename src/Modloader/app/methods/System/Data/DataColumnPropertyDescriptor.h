#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AttributeCollection.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/DataColumnPropertyDescriptor.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Data::DataColumnPropertyDescriptor {
    IL2CPP_REGISTER_METHOD(0x0239E050, void, ctor, app::DataColumnPropertyDescriptor* this_ptr, app::DataColumn* data_column)
    IL2CPP_REGISTER_METHOD(0x0239E090, app::AttributeCollection*, get_Attributes, app::DataColumnPropertyDescriptor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::DataColumn*, get_Column, app::DataColumnPropertyDescriptor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0239E400, app::Type*, get_ComponentType, app::DataColumnPropertyDescriptor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0239E4A0, bool, get_IsReadOnly, app::DataColumnPropertyDescriptor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0239E4C0, app::Type*, get_PropertyType, app::DataColumnPropertyDescriptor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0239E4E0, bool, Equals, app::DataColumnPropertyDescriptor* this_ptr, app::Object* other)
    IL2CPP_REGISTER_METHOD(0x01F3E660, int32_t, GetHashCode, app::DataColumnPropertyDescriptor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0239E5C0, bool, CanResetValue, app::DataColumnPropertyDescriptor* this_ptr, app::Object* component)
    IL2CPP_REGISTER_METHOD(0x0239E760, app::Object*, GetValue, app::DataColumnPropertyDescriptor* this_ptr, app::Object* component)
    IL2CPP_REGISTER_METHOD(0x0239E890, void, ResetValue, app::DataColumnPropertyDescriptor* this_ptr, app::Object* component)
    IL2CPP_REGISTER_METHOD(0x0239EA00, void, SetValue, app::DataColumnPropertyDescriptor* this_ptr, app::Object* component, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldSerializeValue, app::DataColumnPropertyDescriptor* this_ptr, app::Object* component)
    IL2CPP_REGISTER_METHOD(0x0239EB90, bool, get_IsBrowsable, app::DataColumnPropertyDescriptor* this_ptr)
} // namespace app::classes::System::Data::DataColumnPropertyDescriptor
