#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinLookUp.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/CharacterLeftRightMovement.h>
#include <Modloader/app/structs/PlatformMovement.h>

namespace app::classes::SeinLookUp {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::SeinLookUp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement*, get_PlatformMovement, (app::SeinLookUp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06F0, app::CharacterLeftRightMovement*, get_LeftRightMovement, (app::SeinLookUp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A1C30, void, OnSetReferenceToSein, (app::SeinLookUp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A1D10, void, UpdateCharacterState, (app::SeinLookUp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A27B0, bool, ShouldLookUpAnimationKeepPlaying, (app::SeinLookUp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A28B0, void, Serialize, (app::SeinLookUp * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x008A2940, void, ctor, (app::SeinLookUp * this_ptr))
} // namespace app::classes::SeinLookUp
