#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SeinShieldSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinShieldSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005DA1D0, void, OnSetReferenceToSein, (app::SeinShieldSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005DA200, void, OnDestroy, (app::SeinShieldSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005DA240, bool, get_IsStatePerforming, (app::SeinShieldSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005DA240, bool, KeepPlayingAimAnimation, (app::SeinShieldSpell * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047920F8, SeinShieldSpell_KeepPlayingAimAnimation__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005DA250, void, BeginCasting, (app::SeinShieldSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005DA500, void, EndCasting, (app::SeinShieldSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005DA570, void, UpdateCharacterState, (app::SeinShieldSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005DA620, void, UpdateNotCasting, (app::SeinShieldSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005DA6C0, void, UpdateCasting, (app::SeinShieldSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, (app::SeinShieldSpell * this_ptr))
} // namespace app::classes::SeinShieldSpell
