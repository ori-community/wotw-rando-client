#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinDoubleJumpPuppet.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/SeinDoubleJumpPuppet_Event__Enum.h>

namespace app::classes::SeinDoubleJumpPuppet {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PerformDoubleJump, (app::SeinDoubleJumpPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00910BD0, int32_t, get_Id, (app::SeinDoubleJumpPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AC9960, void, OnPerform, (app::SeinDoubleJumpPuppet * this_ptr, int32_t event_id, app::Object__Array* parameters))
    IL2CPP_REGISTER_METHOD(0x00AC9970, void, Perform, (app::SeinDoubleJumpPuppet * this_ptr, app::SeinDoubleJumpPuppet_Event__Enum e))
    IL2CPP_REGISTER_METHODINFO(0x04741F70, SeinDoubleJumpPuppet_Perform__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00AC9A50, void, ctor, (app::SeinDoubleJumpPuppet * this_ptr))
} // namespace app::classes::SeinDoubleJumpPuppet
