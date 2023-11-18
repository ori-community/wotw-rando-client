#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberStateWwiseStateManager.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>

namespace app::classes::Moon::Wwise::UberStateWwiseStateManager {
    IL2CPP_REGISTER_METHOD(0x0270DF40, void, Awake, (app::UberStateWwiseStateManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0270E000, void, OnDestroy, (app::UberStateWwiseStateManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0270E0A0, void, Start, (app::UberStateWwiseStateManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0270E3E0, void, Apply, (app::UberStateWwiseStateManager * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (app::UberStateWwiseStateManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IUberState__Array*, get_AffectingUberStates, (app::UberStateWwiseStateManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_AffectingUberStates, (app::UberStateWwiseStateManager * this_ptr, app::IUberState__Array* value))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::UberStateWwiseStateManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0270E410, void, ctor, (app::UberStateWwiseStateManager * this_ptr))
} // namespace app::classes::Moon::Wwise::UberStateWwiseStateManager
