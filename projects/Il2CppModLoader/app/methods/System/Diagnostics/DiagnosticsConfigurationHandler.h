#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Diagnostics::DiagnosticsConfigurationHandler {
    IL2CPP_REGISTER_METHOD(0x01FFE730, void, ctor, (app::DiagnosticsConfigurationHandler * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04784CE0, DiagnosticsConfigurationHandler__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFE760, app::Object *, Create, (app::DiagnosticsConfigurationHandler * this_ptr, app::Object * parent, app::Object * config_context, app::XmlNode * section))
    IL2CPP_REGISTER_METHODINFO(0x0475A888, DiagnosticsConfigurationHandler_Create__MethodInfo)
}
