#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ProcessUtility.h>

namespace app::classes::ProcessUtility {
    IL2CPP_REGISTER_METHOD(0x031918C0, app::String*, ExcecuteCommandLine, (app::String * application, app::String* arguments))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ProcessUtility * this_ptr))
} // namespace app::classes::ProcessUtility
