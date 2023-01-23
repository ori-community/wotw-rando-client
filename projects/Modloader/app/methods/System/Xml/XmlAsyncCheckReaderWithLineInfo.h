#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlAsyncCheckReaderWithLineInfo.h>
#include <Modloader/app/structs/XmlReader.h>

namespace app::classes::System::Xml::XmlAsyncCheckReaderWithLineInfo {
    IL2CPP_REGISTER_METHOD(0x01959580, void, ctor, (app::XmlAsyncCheckReaderWithLineInfo * this_ptr, app::XmlReader* reader))
    IL2CPP_REGISTER_METHOD(0x01959650, bool, HasLineInfo, (app::XmlAsyncCheckReaderWithLineInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019596E0, int32_t, get_LineNumber, (app::XmlAsyncCheckReaderWithLineInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01959770, int32_t, get_LinePosition, (app::XmlAsyncCheckReaderWithLineInfo * this_ptr))
} // namespace app::classes::System::Xml::XmlAsyncCheckReaderWithLineInfo
