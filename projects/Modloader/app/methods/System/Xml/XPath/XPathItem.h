#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XPathItem.h>

namespace app::classes::System::Xml::XPath::XPathItem {
    IL2CPP_REGISTER_METHOD(0x01955C90, app::Object*, ValueAs, (app::XPathItem * this_ptr, app::Type* return_type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XPathItem * this_ptr))
} // namespace app::classes::System::Xml::XPath::XPathItem
