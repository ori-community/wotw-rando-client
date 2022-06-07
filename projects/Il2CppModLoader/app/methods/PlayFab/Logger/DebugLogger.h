#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PlayFab::Logger::DebugLogger {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::DebugLogger * this_ptr, app::LogLevel__Enum_1 min_log_level))
    IL2CPP_REGISTER_METHOD(0x01853B50, void, Critical, (app::DebugLogger * this_ptr, app::String * format, app::Object__Array * args))
    IL2CPP_REGISTER_METHOD(0x01853B80, void, Debug, (app::DebugLogger * this_ptr, app::String * format, app::Object__Array * args))
    IL2CPP_REGISTER_METHOD(0x01853BB0, void, Error, (app::DebugLogger * this_ptr, app::String * format, app::Object__Array * args))
    IL2CPP_REGISTER_METHOD(0x01853BE0, void, Information, (app::DebugLogger * this_ptr, app::String * format, app::Object__Array * args))
    IL2CPP_REGISTER_METHOD(0x01853C10, void, Trace, (app::DebugLogger * this_ptr, app::String * format, app::Object__Array * args))
    IL2CPP_REGISTER_METHOD(0x01853C30, void, Warning, (app::DebugLogger * this_ptr, app::String * format, app::Object__Array * args))
    IL2CPP_REGISTER_METHOD(0x01853C60, void, Log, (app::DebugLogger * this_ptr, app::LogLevel__Enum_1 log_level, app::String * format, app::Object__Array * args))
}
