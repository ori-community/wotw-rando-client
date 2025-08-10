#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DictionarySectionHandler.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlNode.h>

namespace app::classes::System::Configuration::DictionarySectionHandler {
    IL2CPP_REGISTER_METHOD(0x02961A80, void, ctor, app::DictionarySectionHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02961AB0, app::String*, get_KeyAttributeName, app::DictionarySectionHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02961AE0, app::String*, get_ValueAttributeName, app::DictionarySectionHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02961B10,
        app::Object*,
        Create,
        app::DictionarySectionHandler* this_ptr,
        app::Object* parent,
        app::Object* context,
        app::XmlNode* section
    )
} // namespace app::classes::System::Configuration::DictionarySectionHandler
