#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CollisionStayTrigger.h>
#include <Modloader/app/structs/SelectableCategory__Enum.h>
#include <Modloader/app/structs/Collider.h>

namespace app::classes::CollisionStayTrigger {
    IL2CPP_REGISTER_METHOD(0x012D1AA0, void, Awake, (app::CollisionStayTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::SelectableCategory__Enum, get_Category, (app::CollisionStayTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012D1CB0, void, FixedUpdate, (app::CollisionStayTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012D1E90, void, TurnOn, (app::CollisionStayTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012D2210, void, TurnOff, (app::CollisionStayTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012D2590, void, OnTriggerEnter, (app::CollisionStayTrigger * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x012D2670, void, OnTriggerExit, (app::CollisionStayTrigger * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x012D2730, void, ctor, (app::CollisionStayTrigger * this_ptr))
} // namespace app::classes::CollisionStayTrigger
