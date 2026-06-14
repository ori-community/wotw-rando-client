#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IgnoreSectionHandler.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XmlNode.h>

namespace app::classes::System::Configuration::IgnoreSectionHandler {
    IL2CPP_REGISTER_METHOD(0x02961C00, void, ctor, app::IgnoreSectionHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02961C30,
        app::Object*,
        Create,
        app::IgnoreSectionHandler* this_ptr,
        app::Object* parent,
        app::Object* config_context,
        app::XmlNode* section
    )
} // namespace app::classes::System::Configuration::IgnoreSectionHandler
