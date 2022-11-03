#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CharacterInstantStop {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::CharacterInstantStop * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01046700, app::CharacterLeftRightMovement*, get_LeftRightMovement, (app::CharacterInstantStop * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B39300, app::PlatformMovement*, get_PlatformMovement, (app::CharacterInstantStop * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D0850, void, Start, (app::CharacterInstantStop * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D0850, void, OnEnable, (app::CharacterInstantStop * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013013D0, void, LockForDuration, (app::CharacterInstantStop * this_ptr, float duration))
    IL2CPP_REGISTER_METHOD(0x013013E0, void, Serialize, (app::CharacterInstantStop * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x01301430, void, UpdateCharacterState, (app::CharacterInstantStop * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, (app::CharacterInstantStop * this_ptr))
} // namespace app::classes::CharacterInstantStop
