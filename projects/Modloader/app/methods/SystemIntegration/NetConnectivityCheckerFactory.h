#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/INetworkConnectivityChecker.h>

namespace app::classes::SystemIntegration::NetConnectivityCheckerFactory {
    IL2CPP_REGISTER_METHOD(0x00516B20, app::INetworkConnectivityChecker*, Get, )
}
