#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinRoundupLeashSpell.h>

namespace app::classes::SeinRoundupLeashSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, app::SeinRoundupLeashSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D6E70, void, OnSetReferenceToSein, app::SeinRoundupLeashSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D6EA0, void, OnDestroy, app::SeinRoundupLeashSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, app::SeinRoundupLeashSpell* this_ptr)
} // namespace app::classes::SeinRoundupLeashSpell
