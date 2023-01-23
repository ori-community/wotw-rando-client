#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinInvincibility.h>

namespace app::classes::SeinInvincibility {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::SeinInvincibility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01015370, void, UpdateCharacterState, (app::SeinInvincibility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01015590, void, ctor, (app::SeinInvincibility * this_ptr))
} // namespace app::classes::SeinInvincibility
