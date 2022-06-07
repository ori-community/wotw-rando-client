#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MS::Internal::Xml::Linq::ComponentModel::XElementValuePropertyDescriptor {
    IL2CPP_REGISTER_METHOD(0x0302B1E0, void, ctor, (app::XElementValuePropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, (app::XElementValuePropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0302B270, app::Object *, GetValue, (app::XElementValuePropertyDescriptor * this_ptr, app::Object * component))
    IL2CPP_REGISTER_METHOD(0x0302B370, void, SetValue, (app::XElementValuePropertyDescriptor * this_ptr, app::Object * component, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x0302B520, void, OnChanged, (app::XElementValuePropertyDescriptor * this_ptr, app::Object * sender, app::XObjectChangeEventArgs * args))
}
