#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XPathNavigator_DebuggerDisplayProxy__Boxed.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XPathNavigator.h>

namespace app::classes::System::Xml::XPath::XPathNavigator_DebuggerDisplayProxy {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::XPathNavigator_DebuggerDisplayProxy__Boxed * this_ptr, app::XPathNavigator* nav))
    IL2CPP_REGISTER_METHOD(0x00153560, app::String*, ToString, (app::XPathNavigator_DebuggerDisplayProxy__Boxed * this_ptr))
} // namespace app::classes::System::Xml::XPath::XPathNavigator_DebuggerDisplayProxy
