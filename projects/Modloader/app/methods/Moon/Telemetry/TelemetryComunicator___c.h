#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TelemetryComunicator_c.h>
#include <Modloader/app/structs/IRequest.h>
#include <Modloader/app/structs/IRequestCallback.h>

namespace app::classes::Moon::Telemetry::TelemetryComunicator___c {
    IL2CPP_REGISTER_METHOD(0x010AA4E0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TelemetryComunicator_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010AA620, void, _Send_b__4_0, (app::TelemetryComunicator_c * this_ptr, app::IRequest* r, app::IRequestCallback* c))
} // namespace app::classes::Moon::Telemetry::TelemetryComunicator___c
