#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlCharacterData.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlDocument.h>

namespace app::classes::System::Xml::XmlCharacterData {
    IL2CPP_REGISTER_METHOD(0x01714A90, void, ctor, (app::XmlCharacterData * this_ptr, app::String* data, app::XmlDocument* doc))
    IL2CPP_REGISTER_METHOD(0x01707640, app::String*, get_Value, (app::XmlCharacterData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0195FD10, void, set_Value, (app::XmlCharacterData * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0173D7B0, app::String*, get_InnerText, (app::XmlCharacterData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C53A30, void, set_InnerText, (app::XmlCharacterData * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0195FD30, app::String*, get_Data, (app::XmlCharacterData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0195FDC0, void, set_Data, (app::XmlCharacterData * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0195FE70, bool, CheckOnData, (app::XmlCharacterData * this_ptr, app::String* data))
} // namespace app::classes::System::Xml::XmlCharacterData
