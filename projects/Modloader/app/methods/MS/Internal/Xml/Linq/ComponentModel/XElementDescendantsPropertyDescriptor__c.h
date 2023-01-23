#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XElementDescendantsPropertyDescriptor_c.h>
#include <Modloader/app/structs/IEnumerable_1_System_Xml_Linq_XElement_.h>
#include <Modloader/app/structs/XElement.h>
#include <Modloader/app/structs/XName.h>

namespace app::classes::MS::Internal::Xml::Linq::ComponentModel::XElementDescendantsPropertyDescriptor___c {
    IL2CPP_REGISTER_METHOD(0x03029F60, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XElementDescendantsPropertyDescriptor_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0302A0A0, app::IEnumerable_1_System_Xml_Linq_XElement_*, _GetValue_b__3_0, (app::XElementDescendantsPropertyDescriptor_c * this_ptr, app::XElement* e, app::XName* n))
    IL2CPP_REGISTER_METHODINFO(0x047806D0, XElementDescendantsPropertyDescriptor_c__GetValue_b__3_0__MethodInfo)
} // namespace app::classes::MS::Internal::Xml::Linq::ComponentModel::XElementDescendantsPropertyDescriptor___c
