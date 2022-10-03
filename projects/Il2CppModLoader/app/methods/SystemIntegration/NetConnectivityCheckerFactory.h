#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SystemIntegration::NetConnectivityCheckerFactory {
    IL2CPP_REGISTER_METHOD(0x00516B20, app::INetworkConnectivityChecker*, Get, ())
    IL2CPP_REGISTER_METHODINFO(0x04796DF0, NetConnectivityCheckerFactory_Get__MethodInfo)
} // namespace app::classes::SystemIntegration::NetConnectivityCheckerFactory
