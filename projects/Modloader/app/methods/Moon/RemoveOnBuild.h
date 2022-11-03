#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::RemoveOnBuild {
    IL2CPP_REGISTER_METHOD(0x03190C90, void, Execute, (app::RemoveOnBuild * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RemoveOnBuild * this_ptr))
} // namespace app::classes::Moon::RemoveOnBuild
