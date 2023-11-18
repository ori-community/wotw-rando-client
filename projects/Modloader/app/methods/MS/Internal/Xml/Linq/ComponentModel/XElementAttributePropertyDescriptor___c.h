#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XElementAttributePropertyDescriptor_c.h>
#include <Modloader/app/structs/XAttribute.h>
#include <Modloader/app/structs/XElement.h>
#include <Modloader/app/structs/XName.h>

namespace app::classes::MS::Internal::Xml::Linq::ComponentModel::XElementAttributePropertyDescriptor___c {
    IL2CPP_REGISTER_METHOD(0x030297B0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XElementAttributePropertyDescriptor_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030298F0, app::XAttribute*, _GetValue_b__3_0, (app::XElementAttributePropertyDescriptor_c * this_ptr, app::XElement* e, app::XName* n))
} // namespace app::classes::MS::Internal::Xml::Linq::ComponentModel::XElementAttributePropertyDescriptor___c
