#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityAvatar.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::EntityAvatar {
    IL2CPP_REGISTER_METHOD(0x00C8C150, app::Vector2, get_LookDirection, app::EntityAvatar* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C8C3F0, app::Vector2, get_LookDirectionXYNormalized, app::EntityAvatar* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C8C540, void, InstantFlip, app::EntityAvatar* this_ptr, float direction_sign)
    IL2CPP_REGISTER_METHOD(0x00C8C7F0, void, ctor, app::EntityAvatar* this_ptr)
} // namespace app::classes::EntityAvatar
