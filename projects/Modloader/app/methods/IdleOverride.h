#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IdleOverride.h>
#include <Modloader/app/structs/SeinIdlePuppet.h>

namespace app::classes::IdleOverride {
    IL2CPP_REGISTER_METHOD(0x00625640, void, Override, app::IdleOverride* this_ptr, app::SeinIdlePuppet* puppet)
    IL2CPP_REGISTER_METHOD(0x00625740, void, Revert, app::IdleOverride* this_ptr, app::SeinIdlePuppet* puppet)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::IdleOverride* this_ptr)
} // namespace app::classes::IdleOverride
