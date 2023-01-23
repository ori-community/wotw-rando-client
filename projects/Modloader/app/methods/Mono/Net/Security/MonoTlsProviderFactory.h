#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MonoTlsProvider.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Mono::Net::Security::MonoTlsProviderFactory {
    IL2CPP_REGISTER_METHOD(0x021834F0, app::MonoTlsProvider*, GetProviderInternal, ())
    IL2CPP_REGISTER_METHOD(0x021836A0, void, InitializeInternal, ())
    IL2CPP_REGISTER_METHODINFO(0x047403E8, MonoTlsProviderFactory_InitializeInternal__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02183B20, app::MonoTlsProvider*, LookupProvider, (app::String * name, bool throw_on_error))
    IL2CPP_REGISTER_METHODINFO(0x047351D0, MonoTlsProviderFactory_LookupProvider__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021840B0, void, InitializeProviderRegistration, ())
    IL2CPP_REGISTER_METHOD(0x02184A00, app::MonoTlsProvider*, CreateDefaultProviderImpl, ())
    IL2CPP_REGISTER_METHOD(0x02184AC0, app::MonoTlsProvider*, GetProvider, ())
    IL2CPP_REGISTER_METHODINFO(0x04726D90, MonoTlsProviderFactory_GetProvider__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02184B90, void, cctor, ())
} // namespace app::classes::Mono::Net::Security::MonoTlsProviderFactory
