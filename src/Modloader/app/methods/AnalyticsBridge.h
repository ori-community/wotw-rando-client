#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IDataEvent.h>
#include <Modloader/app/structs/LogType__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::AnalyticsBridge {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x02E8E0F0, void, OnLog, app::String* message, app::String* stacktrace, app::LogType__Enum type)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SendEvent, app::IDataEvent* evt)
} // namespace app::classes::AnalyticsBridge
