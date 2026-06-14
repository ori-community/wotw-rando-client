#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinPowerOfFriendshipSpell.h>

namespace app::classes::SeinPowerOfFriendshipSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, app::SeinPowerOfFriendshipSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005C94E0, void, OnSetReferenceToSein, app::SeinPowerOfFriendshipSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005C9510, void, OnDestroy, app::SeinPowerOfFriendshipSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, app::SeinPowerOfFriendshipSpell* this_ptr)
} // namespace app::classes::SeinPowerOfFriendshipSpell
