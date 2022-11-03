#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CharacterAirNoDeceleration {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::CharacterAirNoDeceleration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_NoDeceleration, (app::CharacterAirNoDeceleration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00800850, void, set_NoDeceleration, (app::CharacterAirNoDeceleration * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01046700, app::CharacterLeftRightMovement*, get_CharacterLeftRightMovement, (app::CharacterAirNoDeceleration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B39300, app::PlatformMovement*, get_PlatformMovement, (app::CharacterAirNoDeceleration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D0850, void, OnEnable, (app::CharacterAirNoDeceleration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01046720, void, Start, (app::CharacterAirNoDeceleration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010468B0, void, OnDestroy, (app::CharacterAirNoDeceleration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01046A40, void, ModifyHorizontalPlatformMovementSettings, (app::CharacterAirNoDeceleration * this_ptr, app::HorizontalPlatformMovementSettings* settings))
    IL2CPP_REGISTER_METHODINFO(0x04710298, CharacterAirNoDeceleration_ModifyHorizontalPlatformMovementSettings__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01046A80, void, UpdateCharacterState, (app::CharacterAirNoDeceleration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01046BD0, void, Serialize, (app::CharacterAirNoDeceleration * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, (app::CharacterAirNoDeceleration * this_ptr))
} // namespace app::classes::CharacterAirNoDeceleration
