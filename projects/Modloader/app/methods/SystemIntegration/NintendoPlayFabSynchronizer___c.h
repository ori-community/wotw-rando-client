#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NintendoPlayFabSynchronizer_c.h>
#include <Modloader/app/structs/AddFriendResult.h>
#include <Modloader/app/structs/RemoveFriendResult.h>

namespace app::classes::SystemIntegration::NintendoPlayFabSynchronizer___c {
    IL2CPP_REGISTER_METHOD(0x00518A80, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NintendoPlayFabSynchronizer_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, _AddFriend_b__18_0, (app::NintendoPlayFabSynchronizer_c * this_ptr, app::AddFriendResult* result))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, _RemoveFriend_b__19_0, (app::NintendoPlayFabSynchronizer_c * this_ptr, app::RemoveFriendResult* result))
} // namespace app::classes::SystemIntegration::NintendoPlayFabSynchronizer___c
