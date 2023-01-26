#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JumpShootSharkSettings.h>

namespace app::classes::JumpShootSharkSettings {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::JumpShootSharkSettings * this_ptr))
}
