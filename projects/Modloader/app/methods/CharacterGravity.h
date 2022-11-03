#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CharacterGravity {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::CharacterGravity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01051AC0, app::CharacterPlatformMovement*, get_PlatformMovement, (app::CharacterGravity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::GravityPlatformMovementSettings*, get_CurrentSettings, (app::CharacterGravity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCA0, app::GravityPlatformMovementSettings*, get_BaseSettings, (app::CharacterGravity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D0850, void, OnEnable, (app::CharacterGravity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01051AE0, void, UpdateCharacterState, (app::CharacterGravity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01051EF0, void, UpdateSettings, (app::CharacterGravity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01051FC0, void, add_ModifyGravityPlatformMovementSettingsEvent, (app::CharacterGravity * this_ptr, app::Action_1_GravityPlatformMovementSettings_* value))
    IL2CPP_REGISTER_METHOD(0x010520B0, void, remove_ModifyGravityPlatformMovementSettingsEvent, (app::CharacterGravity * this_ptr, app::Action_1_GravityPlatformMovementSettings_* value))
    IL2CPP_REGISTER_METHOD(0x010521A0, void, Serialize, (app::CharacterGravity * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x01052250, void, ctor, (app::CharacterGravity * this_ptr))
} // namespace app::classes::CharacterGravity
