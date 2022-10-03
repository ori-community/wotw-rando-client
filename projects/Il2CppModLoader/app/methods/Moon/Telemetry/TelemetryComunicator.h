#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Telemetry::TelemetryComunicator {
    IL2CPP_REGISTER_METHOD(0x010A9E90, app::SwaggerComunicator*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x010AA070, void, Send, (app::TelemetryComunicator * this_ptr, app::IRequest* request))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TelemetryComunicator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010AA440, void, cctor, ())
} // namespace app::classes::Moon::Telemetry::TelemetryComunicator
