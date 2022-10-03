#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MS::Internal::Xml::Linq::ComponentModel::XElementAttributePropertyDescriptor {
    IL2CPP_REGISTER_METHOD(0x03029120, void, ctor, (app::XElementAttributePropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030291B0, app::Object*, GetValue, (app::XElementAttributePropertyDescriptor * this_ptr, app::Object* component))
    IL2CPP_REGISTER_METHOD(0x030294B0, void, OnChanged, (app::XElementAttributePropertyDescriptor * this_ptr, app::Object* sender, app::XObjectChangeEventArgs* args))
    IL2CPP_REGISTER_METHOD(0x030296A0, void, OnChanging, (app::XElementAttributePropertyDescriptor * this_ptr, app::Object* sender, app::XObjectChangeEventArgs* args))
} // namespace app::classes::MS::Internal::Xml::Linq::ComponentModel::XElementAttributePropertyDescriptor
