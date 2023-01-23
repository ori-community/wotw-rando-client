#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BubblemakerBlocked.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>

namespace app::classes::BubblemakerBlocked {
    IL2CPP_REGISTER_METHOD(0x00805460, void, Start, (app::BubblemakerBlocked * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00805660, void, OnDestroy, (app::BubblemakerBlocked * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00805710, void, UnlockBubblemaker, (app::BubblemakerBlocked * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474F448, BubblemakerBlocked_UnlockBubblemaker__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00805800, void, UpdateState, (app::BubblemakerBlocked * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00805A90, void, Apply, (app::BubblemakerBlocked * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (app::BubblemakerBlocked * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD20, app::IUberState__Array*, get_AffectingUberStates, (app::BubblemakerBlocked * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD40, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::BubblemakerBlocked * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00805420, void, ctor, (app::BubblemakerBlocked * this_ptr))
} // namespace app::classes::BubblemakerBlocked
