#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LogType__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberPoolPerfTest_LogCatcher.h>

namespace app::classes::UberPoolPerfTest_LogCatcher {
    IL2CPP_REGISTER_METHOD(0x00FEC180, void, ctor, app::UberPoolPerfTest_LogCatcher* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00FEC3B0,
        void,
        OnLogMessageReceived,
        app::UberPoolPerfTest_LogCatcher* this_ptr,
        app::String* condition,
        app::String* stacktrace,
        app::LogType__Enum type
    )
    IL2CPP_REGISTER_METHOD(0x00FEC6D0, void, Dispose, app::UberPoolPerfTest_LogCatcher* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FEC860, void, Finalize, app::UberPoolPerfTest_LogCatcher* this_ptr)
} // namespace app::classes::UberPoolPerfTest_LogCatcher
