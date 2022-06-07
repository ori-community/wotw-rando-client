#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::ReaderPositionInfo {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::ReaderPositionInfo * this_ptr, app::IXmlLineInfo * line_info))
    IL2CPP_REGISTER_METHOD(0x0199F910, bool, HasLineInfo, (app::ReaderPositionInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0199F9A0, int32_t, get_LineNumber, (app::ReaderPositionInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0199FA30, int32_t, get_LinePosition, (app::ReaderPositionInfo * this_ptr))
}
