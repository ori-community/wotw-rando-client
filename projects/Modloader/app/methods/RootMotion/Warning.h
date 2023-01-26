#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Warning_Logger.h>

namespace app::classes::RootMotion::Warning {
    IL2CPP_REGISTER_METHOD(0x02A2EF60, void, Log_1, (app::String * message, app::Warning_Logger* logger, bool log_in_edit_mode))
    IL2CPP_REGISTER_METHOD(0x02A2F020, void, Log_2, (app::String * message, app::Transform* context, bool log_in_edit_mode))
} // namespace app::classes::RootMotion::Warning
