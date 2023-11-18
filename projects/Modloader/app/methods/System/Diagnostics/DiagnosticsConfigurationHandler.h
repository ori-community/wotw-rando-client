#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DiagnosticsConfigurationHandler.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XmlNode.h>

namespace app::classes::System::Diagnostics::DiagnosticsConfigurationHandler {
    IL2CPP_REGISTER_METHOD(0x01FFE730, void, ctor, (app::DiagnosticsConfigurationHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FFE760, app::Object*, Create, (app::DiagnosticsConfigurationHandler * this_ptr, app::Object* parent, app::Object* config_context, app::XmlNode* section))
} // namespace app::classes::System::Diagnostics::DiagnosticsConfigurationHandler
