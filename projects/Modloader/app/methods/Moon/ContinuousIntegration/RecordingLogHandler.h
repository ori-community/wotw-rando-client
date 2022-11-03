#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::ContinuousIntegration::RecordingLogHandler {
    IL2CPP_REGISTER_METHOD(0x0318BC50, void, ctor, (app::RecordingLogHandler * this_ptr, bool quick_exit))
    IL2CPP_REGISTER_METHOD(0x0318C2F0, void, LogFormat, (app::RecordingLogHandler * this_ptr, app::LogType__Enum type, app::Object_1* context, app::String* format, app::Object__Array* args))
    IL2CPP_REGISTER_METHOD(0x0318C800, bool, IsCaptureString, (app::Object * arg))
    IL2CPP_REGISTER_METHODINFO(0x04771908, RecordingLogHandler_IsCaptureString__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0318C8D0, void, LogException, (app::RecordingLogHandler * this_ptr, app::Exception* exception, app::Object_1* context))
    IL2CPP_REGISTER_METHOD(0x0318CAC0, void, CurrentDomainOnUnhandledException, (app::RecordingLogHandler * this_ptr, app::Object* sender, app::UnhandledExceptionEventArgs* e))
    IL2CPP_REGISTER_METHODINFO(0x04740AC0, RecordingLogHandler_CurrentDomainOnUnhandledException__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0318CBD0, void, ApplicationOnLogMessageReceived, (app::RecordingLogHandler * this_ptr, app::String* condition, app::String* stacktrace, app::LogType__Enum type))
    IL2CPP_REGISTER_METHODINFO(0x04748688, RecordingLogHandler_ApplicationOnLogMessageReceived__MethodInfo)
} // namespace app::classes::Moon::ContinuousIntegration::RecordingLogHandler
