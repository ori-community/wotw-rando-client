#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XElementXmlPropertyDescriptor.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XObjectChangeEventArgs.h>

namespace app::classes::MS::Internal::Xml::Linq::ComponentModel::XElementXmlPropertyDescriptor {
    IL2CPP_REGISTER_METHOD(0x0302B6D0, void, ctor, (app::XElementXmlPropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0302B760, app::Object*, GetValue, (app::XElementXmlPropertyDescriptor * this_ptr, app::Object* component))
    IL2CPP_REGISTER_METHOD(0x0302B860, void, OnChanged, (app::XElementXmlPropertyDescriptor * this_ptr, app::Object* sender, app::XObjectChangeEventArgs* args))
} // namespace app::classes::MS::Internal::Xml::Linq::ComponentModel::XElementXmlPropertyDescriptor
