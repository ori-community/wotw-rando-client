#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::ContinuousIntegration::DisableAllLoggingLogHandler {
    IL2CPP_REGISTER_METHOD(0x0318B010, void, ctor, (app::DisableAllLoggingLogHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, LogFormat, (app::DisableAllLoggingLogHandler * this_ptr, app::LogType__Enum type, app::Object_1* context, app::String* format, app::Object__Array* args))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, LogException, (app::DisableAllLoggingLogHandler * this_ptr, app::Exception* exception, app::Object_1* context))
} // namespace app::classes::Moon::ContinuousIntegration::DisableAllLoggingLogHandler
