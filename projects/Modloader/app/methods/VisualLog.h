#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LogType__Enum.h>
#include <Modloader/app/structs/MonoBehaviour.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/VisualLog.h>

namespace app::classes::VisualLog {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RegisterStatus, app::MonoBehaviour* behaviour)
    IL2CPP_REGISTER_METHOD(0x008C2690, app::VisualLog*, get_Instance, )
    IL2CPP_REGISTER_METHOD(0x008C2790, void, Disable, )
    IL2CPP_REGISTER_METHOD(0x008C2830, void, OnLog, app::String* message, app::String* stack, app::LogType__Enum log_type)
    IL2CPP_REGISTER_METHOD(0x008C29C0, void, ctor, app::VisualLog* this_ptr)
} // namespace app::classes::VisualLog
