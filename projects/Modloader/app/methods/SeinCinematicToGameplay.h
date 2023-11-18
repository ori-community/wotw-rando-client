#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinCinematicToGameplay.h>

namespace app::classes::SeinCinematicToGameplay {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinCinematicToGameplay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A5B3B0, void, OnSetReferenceToSein, (app::SeinCinematicToGameplay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A5B5C0, void, UpdateCharacterState, (app::SeinCinematicToGameplay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A5B620, bool, ShouldKeepPlayingIdle, (app::SeinCinematicToGameplay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, (app::SeinCinematicToGameplay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A5B620, bool, _OnSetReferenceToSein_b__3_0, (app::SeinCinematicToGameplay * this_ptr))
} // namespace app::classes::SeinCinematicToGameplay
