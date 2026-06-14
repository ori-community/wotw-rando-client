#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IRequest.h>
#include <Modloader/app/structs/MoonTelemetryCommunicator.h>

namespace app::classes::Moon::Network::Web::MoonTelemetryCommunicator {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MoonTelemetryCommunicator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02E97530, app::MoonTelemetryCommunicator*, get_Instance, )
    IL2CPP_REGISTER_METHOD(0x02E97710, void, Send, app::MoonTelemetryCommunicator* this_ptr, app::IRequest* request)
    IL2CPP_REGISTER_METHOD(0x02E979F0, int32_t, get_RequestsCount, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStartThreadHandler, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopThreadhandler, )
    IL2CPP_REGISTER_METHOD(0x02E97AA0, void, cctor, )
} // namespace app::classes::Moon::Network::Web::MoonTelemetryCommunicator
