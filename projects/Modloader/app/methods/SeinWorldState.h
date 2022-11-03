#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SeinWorldState {
    IL2CPP_REGISTER_METHOD(0x00AB4DA0, void, Awake, (app::SeinWorldState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB52E0, void, OnEnable, (app::SeinWorldState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB5380, void, OnDisable, (app::SeinWorldState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (app::SeinWorldState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Apply, (app::SeinWorldState * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x005B0220, app::IUberState__Array*, get_AffectingUberStates, (app::SeinWorldState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB5420, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::SeinWorldState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinWorldState * this_ptr))
} // namespace app::classes::SeinWorldState
