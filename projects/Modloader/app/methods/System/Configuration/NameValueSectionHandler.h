#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NameValueSectionHandler.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlNode.h>

namespace app::classes::System::Configuration::NameValueSectionHandler {
    IL2CPP_REGISTER_METHOD(0x02961F30, void, ctor, (app::NameValueSectionHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02961F60, app::String*, get_KeyAttributeName, (app::NameValueSectionHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02961F90, app::String*, get_ValueAttributeName, (app::NameValueSectionHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02961FC0, app::Object*, Create, (app::NameValueSectionHandler * this_ptr, app::Object* parent, app::Object* context, app::XmlNode* section))
} // namespace app::classes::System::Configuration::NameValueSectionHandler
