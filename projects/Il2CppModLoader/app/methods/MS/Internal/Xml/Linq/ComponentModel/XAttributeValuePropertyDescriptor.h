#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MS::Internal::Xml::Linq::ComponentModel::XAttributeValuePropertyDescriptor {
    IL2CPP_REGISTER_METHOD(0x03028C80, void, ctor, (app::XAttributeValuePropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, (app::XAttributeValuePropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03028D10, app::Object*, GetValue, (app::XAttributeValuePropertyDescriptor * this_ptr, app::Object* component))
    IL2CPP_REGISTER_METHOD(0x03028E00, void, SetValue, (app::XAttributeValuePropertyDescriptor * this_ptr, app::Object* component, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x03029030, void, OnChanged, (app::XAttributeValuePropertyDescriptor * this_ptr, app::Object* sender, app::XObjectChangeEventArgs* args))
} // namespace app::classes::MS::Internal::Xml::Linq::ComponentModel::XAttributeValuePropertyDescriptor
