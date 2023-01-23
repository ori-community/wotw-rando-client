#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Exception.h>

namespace app::classes::Mono::Runtime {
    IL2CPP_REGISTER_METHOD(0x023CE6E0, void, mono_runtime_install_handlers, ())
    IL2CPP_REGISTER_METHOD(0x023CE6F0, void, InstallSignalHandlers, ())
    IL2CPP_REGISTER_METHOD(0x023CE700, void, mono_runtime_cleanup_handlers, ())
    IL2CPP_REGISTER_METHOD(0x023CE700, void, RemoveSignalHandlers, ())
    IL2CPP_REGISTER_METHOD(0x023CE750, app::String*, GetDisplayName, ())
    IL2CPP_REGISTER_METHOD(0x0173D7D0, app::String*, GetNativeStackTrace, (app::Exception * exception))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, SetGCAllowSynchronousMajor, (bool flag))
} // namespace app::classes::Mono::Runtime
