#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MonoTlsProvider.h>

namespace app::classes::Mono::Security::Interface::MonoTlsProvider {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MonoTlsProvider* this_ptr)
}
