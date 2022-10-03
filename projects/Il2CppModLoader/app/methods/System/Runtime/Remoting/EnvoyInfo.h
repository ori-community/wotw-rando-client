#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Runtime::Remoting::EnvoyInfo {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::EnvoyInfo * this_ptr, app::IMessageSink* sinks))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IMessageSink*, get_EnvoySinks, (app::EnvoyInfo * this_ptr))
} // namespace app::classes::System::Runtime::Remoting::EnvoyInfo
