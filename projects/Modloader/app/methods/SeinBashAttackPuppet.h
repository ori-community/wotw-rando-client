#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinBashAttackPuppet.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::SeinBashAttackPuppet {
    IL2CPP_REGISTER_METHOD(0x00D8F3B0, void, BashFailed, (app::SeinBashAttackPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420230, int32_t, get_Id, (app::SeinBashAttackPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D8F630, void, OnPerform, (app::SeinBashAttackPuppet * this_ptr, int32_t event_id, app::Object__Array* parameters))
    IL2CPP_REGISTER_METHOD(0x005D6E60, void, ctor, (app::SeinBashAttackPuppet * this_ptr))
} // namespace app::classes::SeinBashAttackPuppet
