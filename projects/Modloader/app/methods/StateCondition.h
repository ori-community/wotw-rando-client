#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StateCondition.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>

namespace app::classes::StateCondition {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (app::StateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009B4650, app::IUberState__Array*, get_AffectingUberStates, (app::StateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::StateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_AllTargets, (app::StateCondition * this_ptr, app::List_1_UnityEngine_GameObject_* value))
    IL2CPP_REGISTER_METHOD(0x009B48C0, void, OnEnable, (app::StateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009B4960, void, OnDisable, (app::StateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009B4A00, void, Awake, (app::StateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009B4BA0, void, OnDestroy, (app::StateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C15C0, void, OnRestoreCheckpoint, (app::StateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009B4D40, bool, Validate, (app::StateCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x009B4E10, void, Apply, (app::StateCondition * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x009B5000, void, ctor, (app::StateCondition * this_ptr))
} // namespace app::classes::StateCondition
