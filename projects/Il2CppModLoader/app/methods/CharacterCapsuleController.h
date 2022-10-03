#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CharacterCapsuleController {
    IL2CPP_REGISTER_METHOD(0x0104A2C0, void, EnableCollider, (app::CharacterCapsuleController * this_ptr, bool enable))
    IL2CPP_REGISTER_METHOD(0x0104A3F0, void, DisableColliderForDuration, (app::CharacterCapsuleController * this_ptr, float duration))
    IL2CPP_REGISTER_METHOD(0x0104A400, void, Awake, (app::CharacterCapsuleController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0104A550, void, Update, (app::CharacterCapsuleController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0104A640, void, Restore, (app::CharacterCapsuleController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0104A800, void, Shrink, (app::CharacterCapsuleController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0104A980, bool, get_IsSphere, (app::CharacterCapsuleController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0104AA30, void, Serialize, (app::CharacterCapsuleController * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::CharacterCapsuleController * this_ptr))
} // namespace app::classes::CharacterCapsuleController
