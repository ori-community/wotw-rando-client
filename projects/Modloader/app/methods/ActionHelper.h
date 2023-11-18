#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/Object_1.h>

namespace app::classes::ActionHelper {
    IL2CPP_REGISTER_METHOD(0x004C4E30, app::String*, GetName_1, (app::ActionMethod * action))
    IL2CPP_REGISTER_METHOD(0x004C4F00, app::String*, GetName_2, (app::Condition_1 * condition))
    IL2CPP_REGISTER_METHOD(0x004C4FD0, app::String*, GetName_3, (app::Object_1 * target))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::String*, GetName_4, (app::String * s))
} // namespace app::classes::ActionHelper
