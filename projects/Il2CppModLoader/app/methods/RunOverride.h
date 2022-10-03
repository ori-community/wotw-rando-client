#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RunOverride {
    IL2CPP_REGISTER_METHOD(0x01373260, void, Override, (app::RunOverride * this_ptr, app::SeinRunPuppet* puppet))
    IL2CPP_REGISTER_METHOD(0x01373380, void, Revert, (app::RunOverride * this_ptr, app::SeinRunPuppet* puppet))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RunOverride * this_ptr))
} // namespace app::classes::RunOverride
