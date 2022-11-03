#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Microsoft::Xbox::Services::Xal::XalService_ManagedRemoteConnectHandlers {
    IL2CPP_REGISTER_METHOD(0x0143D140, void, ctor, (app::XalService_ManagedRemoteConnectHandlers * this_ptr, app::PlatformRemoteConnectShowPromptEventHandler* show_handler, app::PlatformRemoteConnectClosePromptEventHandler* close_handler))
}
