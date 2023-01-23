#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XElementDescendantsPropertyDescriptor.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XObjectChangeEventArgs.h>

namespace app::classes::MS::Internal::Xml::Linq::ComponentModel::XElementDescendantsPropertyDescriptor {
    IL2CPP_REGISTER_METHOD(0x03029930, void, ctor, (app::XElementDescendantsPropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030299C0, app::Object*, GetValue, (app::XElementDescendantsPropertyDescriptor * this_ptr, app::Object* component))
    IL2CPP_REGISTER_METHOD(0x03029CB0, void, OnChanged, (app::XElementDescendantsPropertyDescriptor * this_ptr, app::Object* sender, app::XObjectChangeEventArgs* args))
    IL2CPP_REGISTER_METHOD(0x03029E60, void, OnChanging, (app::XElementDescendantsPropertyDescriptor * this_ptr, app::Object* sender, app::XObjectChangeEventArgs* args))
} // namespace app::classes::MS::Internal::Xml::Linq::ComponentModel::XElementDescendantsPropertyDescriptor
