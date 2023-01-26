#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SingleTagSectionHandler.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XmlNode.h>

namespace app::classes::System::Configuration::SingleTagSectionHandler {
    IL2CPP_REGISTER_METHOD(0x01FFE290, void, ctor, (app::SingleTagSectionHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FFE2C0, app::Object*, Create, (app::SingleTagSectionHandler * this_ptr, app::Object* parent, app::Object* context, app::XmlNode* section))
} // namespace app::classes::System::Configuration::SingleTagSectionHandler
