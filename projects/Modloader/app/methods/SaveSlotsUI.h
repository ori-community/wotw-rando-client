#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SaveSlotUI.h>
#include <Modloader/app/structs/SaveSlotsUI.h>
#include <Modloader/app/structs/List_1_SaveSlotUI_.h>
#include <Modloader/app/structs/ConfirmOrCancel.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/DifficultyMode__Enum.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SaveSlotsUI {
    IL2CPP_REGISTER_METHOD(0x0092B260, app::SaveSlotUI*, get_CurrentSaveSlot, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0092B330, app::List_1_SaveSlotUI_*, get_Items, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0068A180, bool, get_IsVisible, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0092B350, void, SetVisible, (app::SaveSlotsUI * this_ptr, bool visible))
    IL2CPP_REGISTER_METHOD(0x0092B5D0, void, SetVisibleImmediate, (app::SaveSlotsUI * this_ptr, bool visible))
    IL2CPP_REGISTER_METHOD(0x0092B990, void, OnEnable, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0092BB70, void, OnDisable, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0092BBB0, app::SaveSlotUI*, get_SaveSlotUnderCursor, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0092BDB0, void, Awake, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0092C1E0, void, RefreshSlots, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471CC28, SaveSlotsUI_RefreshSlots__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0092C2D0, void, OnDestroy, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0092C5B0, bool, get_PromptIsOpen, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0092C650, bool, get_IsCopying, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0092C6F0, bool, get_SelectingDifficulty, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0092C7A0, void, CopySaveSlotsNoQuestion, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0092C7B0, void, CopySaveSlots, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0092CC00, void, RequestCopy, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04711D88, SaveSlotsUI_RequestCopy__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0092CFB0, void, OnCopyFinished, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04768598, SaveSlotsUI_OnCopyFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0092CFD0, void, CancelCopying, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0092D180, void, ExitCopyingState, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnOverrideNewGame, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0092D300, void, OnOverrideCopyCancelled, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04746670, SaveSlotsUI_OnOverrideCopyCancelled__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0092D400, void, OnOverrideCopyConfirmed, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047240E8, SaveSlotsUI_OnOverrideCopyConfirmed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0092D420, void, _clearPrompt, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0092D520, void, AskPrompt, (app::SaveSlotsUI * this_ptr, app::ConfirmOrCancel* question, app::Action* confirm, app::Action* cancel))
    IL2CPP_REGISTER_METHOD(0x0092D8D0, void, OnDeleteSaveConfirmed, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04762438, SaveSlotsUI_OnDeleteSaveConfirmed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0092DD90, void, RequestSlotDeletion, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474F8A0, SaveSlotsUI_RequestSlotDeletion__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0092DDC0, void, OnSlotDeletionFinished, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478A040, SaveSlotsUI_OnSlotDeletionFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0092DDD0, void, OnDeleteSaveCancelled, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04781A00, SaveSlotsUI_OnDeleteSaveCancelled__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0092DF30, void, ClampCurrentItemIndex, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0092E020, void, HandleNavigation, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0092E420, void, SetCurrentItem_1, (app::SaveSlotsUI * this_ptr, app::SaveSlotUI* save_slot))
    IL2CPP_REGISTER_METHOD(0x0092E6B0, void, SetCurrentItemAndScroll, (app::SaveSlotsUI * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0092E6F0, void, SetCurrentItemAndScrollNow, (app::SaveSlotsUI * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0092E8A0, void, SetCurrentItem_2, (app::SaveSlotsUI * this_ptr, int32_t index, bool play_sound))
    IL2CPP_REGISTER_METHOD(0x0092EBE0, void, FixedUpdate, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00930350, void, RefreshState, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00930800, bool, get_ClickedCurrentItem, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00930920, void, UsedSaveSlotSelected, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00930B20, void, PressedSaveSlotNotReady, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00930CF0, void, EmptySaveSlotSelected, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00689DA0, bool, get_IsSuspended, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00689DB0, void, set_IsSuspended, (app::SaveSlotsUI * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0091D5A0, app::SuspendableMask__Enum, get_Mask, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00930D90, void, set_Mask, (app::SaveSlotsUI * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00930E50, void, SetDifficulty, (app::SaveSlotsUI * this_ptr, app::DifficultyMode__Enum difficulty))
    IL2CPP_REGISTER_METHOD(0x00930FF0, void, CancelDifficultyScreen, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00931210, void, OnTitleScreenStartup, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04746948, SaveSlotsUI_OnTitleScreenStartup__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00931440, void, ResetSelectedSpot, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00720150, app::String__Array*, GetAllConditionNames, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006D64E0, app::Int32__Array*, GetAllConditionGuids, (app::SaveSlotsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00931470, app::String*, GetConditionNameFromGuid, (app::SaveSlotsUI * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsConditionGuidValid, (app::SaveSlotsUI * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x009314B0, bool, Validate, (app::SaveSlotsUI * this_ptr, int32_t condition_guid))
    IL2CPP_REGISTER_METHOD(0x009314F0, void, ctor, (app::SaveSlotsUI * this_ptr))
} // namespace app::classes::SaveSlotsUI
