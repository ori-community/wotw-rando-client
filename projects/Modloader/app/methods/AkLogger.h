#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkLogger.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::AkLogger {
    IL2CPP_REGISTER_METHOD(0x026EE590, void, ctor, app::AkLogger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026EE870, app::AkLogger*, get_Instance, )
    IL2CPP_REGISTER_METHOD(0x026EE910, void, Finalize, app::AkLogger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Init, app::AkLogger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026EEB50, void, WwiseInternalLogError, app::String* message)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Message, app::String* message)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Warning, app::String* message)
    IL2CPP_REGISTER_METHOD(0x026EEC00, void, Error, app::String* message)
    IL2CPP_REGISTER_METHOD(0x026EECB0, void, cctor, )
} // namespace app::classes::AkLogger
