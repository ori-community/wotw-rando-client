#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XElementElementsPropertyDescriptor_c.h>
#include <Modloader/app/structs/IEnumerable_1_System_Xml_Linq_XElement_.h>
#include <Modloader/app/structs/XElement.h>
#include <Modloader/app/structs/XName.h>

namespace app::classes::MS::Internal::Xml::Linq::ComponentModel::XElementElementsPropertyDescriptor___c {
    IL2CPP_REGISTER_METHOD(0x0302B050, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XElementElementsPropertyDescriptor_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0302B190, app::IEnumerable_1_System_Xml_Linq_XElement_*, _GetValue_b__3_0, (app::XElementElementsPropertyDescriptor_c * this_ptr, app::XElement* e, app::XName* n))
} // namespace app::classes::MS::Internal::Xml::Linq::ComponentModel::XElementElementsPropertyDescriptor___c
