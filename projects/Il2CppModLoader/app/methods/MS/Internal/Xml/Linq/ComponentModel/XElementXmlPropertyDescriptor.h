#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MS::Internal::Xml::Linq::ComponentModel::XElementXmlPropertyDescriptor {
    IL2CPP_REGISTER_METHOD(0x0302B6D0, void, ctor, (app::XElementXmlPropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0302B760, app::Object *, GetValue, (app::XElementXmlPropertyDescriptor * this_ptr, app::Object * component))
    IL2CPP_REGISTER_METHOD(0x0302B860, void, OnChanged, (app::XElementXmlPropertyDescriptor * this_ptr, app::Object * sender, app::XObjectChangeEventArgs * args))
}
