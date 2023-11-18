#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonTelemetryCommunicator_c.h>
#include <Modloader/app/structs/IRequest.h>
#include <Modloader/app/structs/IRequestCallback.h>

namespace app::classes::Moon::Network::Web::MoonTelemetryCommunicator___c {
    IL2CPP_REGISTER_METHOD(0x02E97C40, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MoonTelemetryCommunicator_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E97D80, void, _Send_b__5_0, (app::MoonTelemetryCommunicator_c * this_ptr, app::IRequest* r, app::IRequestCallback* c))
} // namespace app::classes::Moon::Network::Web::MoonTelemetryCommunicator___c
