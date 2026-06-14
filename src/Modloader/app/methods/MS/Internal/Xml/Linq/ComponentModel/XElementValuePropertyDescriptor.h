#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XElementValuePropertyDescriptor.h>
#include <Modloader/app/structs/XObjectChangeEventArgs.h>

namespace app::classes::MS::Internal::Xml::Linq::ComponentModel::XElementValuePropertyDescriptor {
    IL2CPP_REGISTER_METHOD(0x0302B1E0, void, ctor, app::XElementValuePropertyDescriptor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, app::XElementValuePropertyDescriptor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0302B270, app::Object*, GetValue, app::XElementValuePropertyDescriptor* this_ptr, app::Object* component)
    IL2CPP_REGISTER_METHOD(0x0302B370, void, SetValue, app::XElementValuePropertyDescriptor* this_ptr, app::Object* component, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0302B520, void, OnChanged, app::XElementValuePropertyDescriptor* this_ptr, app::Object* sender, app::XObjectChangeEventArgs* args)
} // namespace app::classes::MS::Internal::Xml::Linq::ComponentModel::XElementValuePropertyDescriptor
