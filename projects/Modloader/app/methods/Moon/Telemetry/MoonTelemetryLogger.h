#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ElapsedEventArgs.h>
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Thread.h>

namespace app::classes::Moon::Telemetry::MoonTelemetryLogger {
    IL2CPP_REGISTER_METHOD(0x02E99E00, bool, get_s_isDebug, ())
    IL2CPP_REGISTER_METHOD(0x02E99EA0, void, Log, (app::Object * message, app::Object_1* obj))
    IL2CPP_REGISTER_METHOD(0x02E99F30, void, LogWarning, (app::String * text, app::Object_1* obj))
    IL2CPP_REGISTER_METHOD(0x02E99FC0, void, LogError, (app::String * text, app::Object_1* obj))
    IL2CPP_REGISTER_METHOD(0x02E9A080, void, OnThreadStarted, (app::Thread * thread))
    IL2CPP_REGISTER_METHOD(0x02E9A3A0, void, OnThreadStopped, ())
    IL2CPP_REGISTER_METHOD(0x02E9A470, void, PostThreadState, (app::Object * sender, app::ElapsedEventArgs* e))
    IL2CPP_REGISTER_METHOD(0x02E9A650, void, cctor, ())
} // namespace app::classes::Moon::Telemetry::MoonTelemetryLogger
