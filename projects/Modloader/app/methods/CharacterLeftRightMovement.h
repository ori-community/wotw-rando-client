#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterLeftRightMovement.h>
#include <Modloader/app/structs/Action_1_HorizontalPlatformMovementSettings_.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/CharacterSpriteMirror.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings_SpeedSet.h>
#include <Modloader/app/structs/ICharacterTurningHandler.h>
#include <Modloader/app/structs/PlatformMovement.h>

namespace app::classes::CharacterLeftRightMovement {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::CharacterLeftRightMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01051AC0, app::PlatformMovement*, get_PlatformMovement, (app::CharacterLeftRightMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01301AA0, app::CharacterSpriteMirror*, get_SpriteMirror, (app::CharacterLeftRightMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::HorizontalPlatformMovementSettings*, get_CurrentSettings, (app::CharacterLeftRightMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCA0, app::HorizontalPlatformMovementSettings*, get_BaseSettings, (app::CharacterLeftRightMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD40, app::ICharacterTurningHandler*, get_TurningHandler, (app::CharacterLeftRightMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01301AE0, void, set_TurningHandler, (app::CharacterLeftRightMovement * this_ptr, app::ICharacterTurningHandler* value))
    IL2CPP_REGISTER_METHOD(0x01301B00, bool, get_TurningHandlerIsPlaying, (app::CharacterLeftRightMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01301BC0, void, Serialize, (app::CharacterLeftRightMovement * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x01301C10, app::HorizontalPlatformMovementSettings_SpeedSet*, get_SpeedSet, (app::CharacterLeftRightMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01301C80, app::HorizontalPlatformMovementSettings_SpeedSet*, get_BaseSpeedSet, (app::CharacterLeftRightMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01301CF0, float, get_HorizontalInput, (app::CharacterLeftRightMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B31760, void, set_HorizontalInput, (app::CharacterLeftRightMovement * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01301D30, float, get_BaseHorizontalInput, (app::CharacterLeftRightMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B31760, void, set_BaseHorizontalInput, (app::CharacterLeftRightMovement * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x005D0850, void, OnEnable, (app::CharacterLeftRightMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01301D40, void, ReverseHorizontalMovement, (app::CharacterLeftRightMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01301EE0, void, FixedUpdate, (app::CharacterLeftRightMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01302710, void, LateUpdate, (app::CharacterLeftRightMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01302770, void, UpdateSettings, (app::CharacterLeftRightMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01302830, void, add_ModifyHorizontalPlatformMovementSettingsEvent, (app::CharacterLeftRightMovement * this_ptr, app::Action_1_HorizontalPlatformMovementSettings_* value))
    IL2CPP_REGISTER_METHOD(0x01302920, void, remove_ModifyHorizontalPlatformMovementSettingsEvent, (app::CharacterLeftRightMovement * this_ptr, app::Action_1_HorizontalPlatformMovementSettings_* value))
    IL2CPP_REGISTER_METHOD(0x01302A10, void, ctor, (app::CharacterLeftRightMovement * this_ptr))
} // namespace app::classes::CharacterLeftRightMovement
