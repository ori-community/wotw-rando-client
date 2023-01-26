#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/NintendoSwitchDirectory.h>

namespace app::classes::NintendoSwitchDirectory {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, Exists, (app::String * path))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CreateDirectory, (app::String * path))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NintendoSwitchDirectory * this_ptr))
} // namespace app::classes::NintendoSwitchDirectory
