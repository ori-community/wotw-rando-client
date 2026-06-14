#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MonoTlsProvider.h>

namespace app::classes::Mono::Security::Interface::MonoTlsProviderFactory {
    IL2CPP_REGISTER_METHOD(0x02A46660, app::MonoTlsProvider*, GetProvider, )
}
