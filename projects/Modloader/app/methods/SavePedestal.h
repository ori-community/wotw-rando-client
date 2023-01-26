#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SavePedestal.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>

namespace app::classes::SavePedestal {
    IL2CPP_REGISTER_METHOD(0x009147C0, bool, get_IsShowingHint, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00914860, bool, get_HasGameBeenSaved, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00914950, void, set_HasGameBeenSaved, (app::SavePedestal * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00914A40, bool, get_IsTeleporterActive, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00914B30, void, set_IsTeleporterActive, (app::SavePedestal * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00914C20, bool, get_CanPerformActionBase, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00914EB0, bool, get_IsPlayingAnyTimeline, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00915030, bool, get_CanPerformSaveAction, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00915040, bool, get_CanPerformTeleportAction, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00915100, bool, get_IsInside, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009151E0, void, Awake, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009152B0, void, OnDestroy, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00915370, void, OnEnable, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00915420, void, OnDisable, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009154C0, void, Apply, (app::SavePedestal * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x00915690, app::IUberState__Array*, get_AffectingUberStates, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00915720, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009158E0, void, OnTeleporterActivationStateChanged, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009158E0, void, RefreshIsAnyOtherTeleporterActive, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00915900, void, Highlight, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00915E00, void, Unhighlight, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00916140, bool, get_OriHasTargets, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00916260, float, get_DistanceToSein, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00916410, void, FixedUpdate, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00916B10, void, UpdateAbilityRestrictZone, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00916C80, void, TeleportOnPedestal, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00916CB0, void, OnBeginTeleporting, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00916EE0, void, OnFinishedTeleporting, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00917000, void, MarkAsUsed, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009171B0, void, UpdateHint, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00917370, void, ShowHint, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009175B0, void, HideHint, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00917680, void, SaveOnPedestal, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00917BD0, void, SaveGame, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSceneSave_1, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSceneSave_2, (app::SceneRoot * root))
    IL2CPP_REGISTER_METHOD(0x006B8960, bool, get_InvalidateParentTimelineCache, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B8970, void, set_InvalidateParentTimelineCache, (app::SavePedestal * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00917D50, void, ctor, (app::SavePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00917E00, void, cctor, ())
} // namespace app::classes::SavePedestal
