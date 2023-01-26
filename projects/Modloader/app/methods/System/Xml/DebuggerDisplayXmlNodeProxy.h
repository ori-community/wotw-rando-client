#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DebuggerDisplayXmlNodeProxy__Boxed.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlNode.h>

namespace app::classes::System::Xml::DebuggerDisplayXmlNodeProxy {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::DebuggerDisplayXmlNodeProxy__Boxed * this_ptr, app::XmlNode* node))
    IL2CPP_REGISTER_METHOD(0x001DE680, app::String*, ToString, (app::DebuggerDisplayXmlNodeProxy__Boxed * this_ptr))
} // namespace app::classes::System::Xml::DebuggerDisplayXmlNodeProxy
