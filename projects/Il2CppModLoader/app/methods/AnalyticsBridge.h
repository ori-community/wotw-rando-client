#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AnalyticsBridge {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x02E8E0F0, void, OnLog, (app::String * message, app::String * stacktrace, app::LogType__Enum type))
    IL2CPP_REGISTER_METHODINFO(0x047629C8, AnalyticsBridge_OnLog__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SendEvent, (app::IDataEvent * evt))
}
