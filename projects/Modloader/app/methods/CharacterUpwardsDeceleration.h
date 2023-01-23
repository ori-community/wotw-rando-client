#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CharacterUpwardsDeceleration.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/Archive.h>

namespace app::classes::CharacterUpwardsDeceleration {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::CharacterUpwardsDeceleration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01051AC0, app::PlatformMovement*, get_PlatformMovement, (app::CharacterUpwardsDeceleration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006E35F0, void, Reset, (app::CharacterUpwardsDeceleration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01316D40, void, UpdateCharacterState, (app::CharacterUpwardsDeceleration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01316F80, void, Serialize, (app::CharacterUpwardsDeceleration * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, (app::CharacterUpwardsDeceleration * this_ptr))
} // namespace app::classes::CharacterUpwardsDeceleration
