#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlTextReaderImpl_ParsingState__Boxed.h>

namespace app::classes::System::Xml::XmlTextReaderImpl_ParsingState {
    IL2CPP_REGISTER_METHOD(0x001DA3C0, void, Clear, (app::XmlTextReaderImpl_ParsingState__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DA3D0, void, Close, (app::XmlTextReaderImpl_ParsingState__Boxed * this_ptr, bool close_input))
    IL2CPP_REGISTER_METHOD(0x00116320, int32_t, get_LineNo, (app::XmlTextReaderImpl_ParsingState__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DA410, int32_t, get_LinePos, (app::XmlTextReaderImpl_ParsingState__Boxed * this_ptr))
} // namespace app::classes::System::Xml::XmlTextReaderImpl_ParsingState
