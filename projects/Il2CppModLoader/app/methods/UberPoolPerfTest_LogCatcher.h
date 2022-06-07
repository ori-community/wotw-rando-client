#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberPoolPerfTest_LogCatcher {
    IL2CPP_REGISTER_METHOD(0x00FEC180, void, ctor, (app::UberPoolPerfTest_LogCatcher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FEC3B0, void, OnLogMessageReceived, (app::UberPoolPerfTest_LogCatcher * this_ptr, app::String * condition, app::String * stacktrace, app::LogType__Enum type))
    IL2CPP_REGISTER_METHODINFO(0x04768460, UberPoolPerfTest_LogCatcher_OnLogMessageReceived__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00FEC6D0, void, Dispose, (app::UberPoolPerfTest_LogCatcher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FEC860, void, Finalize, (app::UberPoolPerfTest_LogCatcher * this_ptr))
}
