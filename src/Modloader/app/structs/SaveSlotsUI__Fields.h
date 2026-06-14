#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SaveSlotsUI__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SaveSlotsUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotsUI__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_SaveSlotsUI__Fields_DEFINED
struct SaveSlotsItemsUI;
struct SaveSlotUI;
struct ConfirmOrCancel;
struct ActionMethod;
struct SoundProvider;
struct Event_1;
struct MessageProvider;
struct MessageBox;
struct GameObject;
struct LegacyTransparencyAnimator;
struct Queue_1_SaveSlotsUI_StorageOperation_;
struct Transform;
struct MoonTimeline;
struct String__Array;
struct Int32__Array;
struct SaveSlotsUI__Fields {
    struct MonoBehaviour__Fields _;
    struct SaveSlotsItemsUI* ItemsUI;
    struct SaveSlotUI* CopyingFrom;
    struct ConfirmOrCancel* OverrideQuestion;
    struct ConfirmOrCancel* DeleteQuestion;
    int32_t CurrentSlotIndex;
    struct ConfirmOrCancel* m_prompt;
    struct ActionMethod* EmptySaveSlotPressedAction;
    struct ActionMethod* UsedSaveSlotPressedAction;
    struct ActionMethod* PressedNotReadyAction;
    struct ActionMethod* OnBackPressedAction;
    bool Active;
    struct SoundProvider* SelectSound;
    struct SoundProvider* BeginCopySound;
    struct SoundProvider* CopySound;
    struct SoundProvider* BeginDeleteSound;
    struct SoundProvider* DeleteSound;
    struct SoundProvider* CancelCopySound;
    struct SoundProvider* CancelDeleteSound;
    struct SoundProvider* OpenDifficultyMenuSound;
    struct SoundProvider* CancelDifficultyMenuSound;
    struct Event_1* PopupSound;
    struct Event_1* CancelPopupSound;
    struct MessageProvider* CompletedGameMessageProvider;
    struct MessageProvider* CopyLegendMessageProvider;
    struct MessageProvider* PasteLegendMessageProvider;
    struct MessageBox* CopyLegend;
    struct GameObject* DeleteLegend;
    struct LegacyTransparencyAnimator* FadeAnimator;
    bool m_isVisible;
    struct Queue_1_SaveSlotsUI_StorageOperation_* m_storageOperationsQueue;
    struct GameObject* Legend;
    struct Transform* SelectedSaveSlotSpot;
    struct MoonTimeline* DofAnimation;
    bool SaveSlotLoadedOnGameStart;
    struct GameObject* m_difficultyScreen;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    bool m_isLockedDownloadingSaves;
    struct String__Array* m_conditionNames;
    struct Int32__Array* m_conditionIds;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SaveSlotsUI__Fields_FWDDECL)
#define IL2CPP_STRUCT_SaveSlotsUI__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/ConfirmOrCancel.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Queue_1_SaveSlotsUI_StorageOperation_.h>
#include <Modloader/app/structs/SaveSlotUI.h>
#include <Modloader/app/structs/SaveSlotsItemsUI.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SaveSlotsUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotsUI__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SaveSlotsUI__Fields_FWDDECL)
#include <Modloader/app/structs/SaveSlotsUI__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SaveSlotsUI__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
