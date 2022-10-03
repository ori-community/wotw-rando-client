#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::NclUtilities {
    IL2CPP_REGISTER_METHOD(0x01E70E40, bool, IsThreadPoolLow, ())
    IL2CPP_REGISTER_METHOD(0x01E70E70, bool, get_HasShutdownStarted, ())
    IL2CPP_REGISTER_METHOD(0x01E70FC0, bool, IsCredentialFailure, (app::SecurityStatus__Enum error))
    IL2CPP_REGISTER_METHOD(0x01E70FF0, bool, IsClientFault, (app::SecurityStatus__Enum error))
    IL2CPP_REGISTER_METHOD(0x01E71020, app::ContextCallback*, get_ContextRelativeDemandCallback, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DemandCallback, (app::Object * state))
    IL2CPP_REGISTER_METHODINFO(0x0475E8F8, NclUtilities_DemandCallback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E711C0, bool, GuessWhetherHostIsLoopback, (app::String * host))
    IL2CPP_REGISTER_METHOD(0x01E712B0, bool, IsFatal, (app::Exception * exception))
    IL2CPP_REGISTER_METHOD(0x01E713B0, bool, IsAddressLocal, (app::IPAddress * ip_address))
    IL2CPP_REGISTER_METHOD(0x01E71450, app::IPHostEntry*, GetLocalHost, ())
    IL2CPP_REGISTER_METHOD(0x01E714F0, app::IPAddress__Array*, get_LocalAddresses, ())
    IL2CPP_REGISTER_METHOD(0x01E71B90, app::Object*, get_LocalAddressesLock, ())
} // namespace app::classes::System::Net::NclUtilities
