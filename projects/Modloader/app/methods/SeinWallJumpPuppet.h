#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/MoonAnimation__Array.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/SeinWallJumpPuppet.h>
#include <Modloader/app/structs/SeinWallJumpPuppet_Event__Enum.h>

namespace app::classes::SeinWallJumpPuppet {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnLeftJump, app::SeinWallJumpPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnLeftAwayJump, app::SeinWallJumpPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnLeftTowardsJump, app::SeinWallJumpPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEdgeJump, app::SeinWallJumpPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnLeftRegularJump, app::SeinWallJumpPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRightAwayJump, app::SeinWallJumpPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRightTowardsJump, app::SeinWallJumpPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRightRegularJump, app::SeinWallJumpPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008E77B0, int32_t, get_Id, app::SeinWallJumpPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AB1530, void, Perform, app::SeinWallJumpPuppet* this_ptr, app::SeinWallJumpPuppet_Event__Enum e)
    IL2CPP_REGISTER_METHOD(0x00AB1530, void, OnPerform, app::SeinWallJumpPuppet* this_ptr, int32_t event_id, app::Object__Array* parameters)
    IL2CPP_REGISTER_METHOD(
        0x00AB1640,
        int32_t,
        PlaySpecialAnimationRandom,
        app::SeinWallJumpPuppet* this_ptr,
        app::MoonAnimation__Array* animations,
        int32_t priority,
        app::Func_1_Boolean_* condition,
        app::Action* on_start,
        app::Action* on_stop
    )
    IL2CPP_REGISTER_METHOD(0x005D6E60, void, ctor, app::SeinWallJumpPuppet* this_ptr)
} // namespace app::classes::SeinWallJumpPuppet
