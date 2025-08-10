#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlReader_XmlReaderDebuggerDisplayProxy__Boxed.h>

namespace app::classes::System::Xml::XmlReader_XmlReaderDebuggerDisplayProxy {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, app::XmlReader_XmlReaderDebuggerDisplayProxy__Boxed* this_ptr, app::XmlReader* reader)
    IL2CPP_REGISTER_METHOD(0x0013C490, app::String*, ToString, app::XmlReader_XmlReaderDebuggerDisplayProxy__Boxed* this_ptr)
} // namespace app::classes::System::Xml::XmlReader_XmlReaderDebuggerDisplayProxy
