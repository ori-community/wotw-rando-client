#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SelectableCategory__Enum.h>
#include <Modloader/app/structs/PlayerCollisionStayTrigger.h>

namespace app::classes::PlayerCollisionStayTrigger {
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::SelectableCategory__Enum, get_Category, (app::PlayerCollisionStayTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0140B870, void, Awake, (app::PlayerCollisionStayTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0140BA50, void, FixedUpdate, (app::PlayerCollisionStayTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611C70, void, ctor, (app::PlayerCollisionStayTrigger * this_ptr))
} // namespace app::classes::PlayerCollisionStayTrigger
