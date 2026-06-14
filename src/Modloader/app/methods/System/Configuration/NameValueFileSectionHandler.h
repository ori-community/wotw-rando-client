#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NameValueFileSectionHandler.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XmlNode.h>

namespace app::classes::System::Configuration::NameValueFileSectionHandler {
    IL2CPP_REGISTER_METHOD(0x02961ED0, void, ctor, app::NameValueFileSectionHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02961F00,
        app::Object*,
        Create,
        app::NameValueFileSectionHandler* this_ptr,
        app::Object* parent,
        app::Object* config_context,
        app::XmlNode* section
    )
} // namespace app::classes::System::Configuration::NameValueFileSectionHandler
