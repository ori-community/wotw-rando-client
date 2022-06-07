#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SeinBounceAbility {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinBounceAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D94940, void, OnSetReferenceToSein, (app::SeinBounceAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D94980, void, OnDestroy, (app::SeinBounceAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D94AA0, void, OnExit, (app::SeinBounceAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D94AF0, void, UpdateCharacterState, (app::SeinBounceAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005E1300, bool, ShouldJumpAnimationKeepPlaying, (app::SeinBounceAbility * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04764588, SeinBounceAbility_ShouldJumpAnimationKeepPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, (app::SeinBounceAbility * this_ptr))
}
