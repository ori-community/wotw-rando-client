#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CharacterApplyFrictionToSpeed {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::CharacterApplyFrictionToSpeed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B39300, app::PlatformMovement*, get_PlatformMovement, (app::CharacterApplyFrictionToSpeed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D0850, void, Start, (app::CharacterApplyFrictionToSpeed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01049F70, void, UpdateCharacterState, (app::CharacterApplyFrictionToSpeed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0104A260, void, Serialize, (app::CharacterApplyFrictionToSpeed * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, (app::CharacterApplyFrictionToSpeed * this_ptr))
} // namespace app::classes::CharacterApplyFrictionToSpeed
