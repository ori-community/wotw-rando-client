#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfigXmlDocument.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlTextReader.h>

namespace app::classes::System::Configuration::ConfigXmlDocument {
    IL2CPP_REGISTER_METHOD(0x02961630, void, ctor, (app::ConfigXmlDocument * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02961660, app::String*, get_Filename, (app::ConfigXmlDocument * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02961690, int32_t, get_LineNumber, (app::ConfigXmlDocument * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029616C0, app::String*, IConfigErrorInfo_get_Filename, (app::ConfigXmlDocument * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029616F0, int32_t, IConfigErrorInfo_get_LineNumber, (app::ConfigXmlDocument * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02961720, void, LoadSingleElement, (app::ConfigXmlDocument * this_ptr, app::String* filename, app::XmlTextReader* source_reader))
} // namespace app::classes::System::Configuration::ConfigXmlDocument
