#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ExceptionsDebugText {
    IL2CPP_REGISTER_METHOD(0x009836C0, void, EnsureImguiRegistered, (app::ExceptionsDebugText * this_ptr, bool registered))
    IL2CPP_REGISTER_METHOD(0x009837C0, void, Awake, (app::ExceptionsDebugText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009838E0, void, OnEnable, (app::ExceptionsDebugText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00983A60, void, OnDisable, (app::ExceptionsDebugText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00983BD0, void, OnLogMessageReceived, (app::ExceptionsDebugText * this_ptr, app::String* condition, app::String* stacktrace, app::LogType__Enum type))
    IL2CPP_REGISTER_METHODINFO(0x04785370, ExceptionsDebugText_OnLogMessageReceived__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00983C00, void, Update, (app::ExceptionsDebugText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00984060, void, OnGUI, (app::ExceptionsDebugText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00984580, void, ctor, (app::ExceptionsDebugText * this_ptr))
} // namespace app::classes::ExceptionsDebugText
