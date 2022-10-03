#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CharacterTimelineTurning {
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsDone, (app::CharacterTimelineTurning * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013163D0, bool, get_IsPlaying, (app::CharacterTimelineTurning * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013163F0, void, Play, (app::CharacterTimelineTurning * this_ptr, app::ICharacter* character, bool face_left, app::Action* on_stop))
    IL2CPP_REGISTER_METHOD(0x013167F0, void, OnAnimationEnd, (app::CharacterTimelineTurning * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04739610, CharacterTimelineTurning_OnAnimationEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01316AE0, void, Flip, (app::CharacterTimelineTurning * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470B8D8, CharacterTimelineTurning_Flip__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01316B80, void, Stop, (app::CharacterTimelineTurning * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01316C70, bool, CanBeCancelled, (app::CharacterTimelineTurning * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CharacterTimelineTurning * this_ptr))
} // namespace app::classes::CharacterTimelineTurning
