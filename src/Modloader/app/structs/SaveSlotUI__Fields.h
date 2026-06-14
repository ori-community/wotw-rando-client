#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SaveSlotUI__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SaveSlotUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotUI__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_SaveSlotUI__Fields_DEFINED
struct MessageBox;
struct TranslatedMessageProvider;
struct MessageProvider;
struct Transform;
struct Renderer;
struct GameObject;
struct Texture;
struct SoundProvider;
struct BaseAnimator;
struct List_1_BackupSaveSlotUI_;
struct SaveSlotUI__Fields {
    struct MonoBehaviour__Fields _;
    struct MessageBox* AreaName;
    struct MessageBox* Health;
    struct MessageBox* Energy;
    struct MessageBox* Time;
    struct MessageBox* EmptySlot;
    struct MessageBox* Difficulty;
    struct TranslatedMessageProvider* EmptySlotTextMessageProvider;
    struct MessageProvider* EasyTextMessageProvider;
    struct MessageProvider* NormalTextMessageProvider;
    struct MessageProvider* HardTextMessageProvider;
    struct MessageProvider* OneLifeTestMessageProvider;
    struct MessageProvider* DifficultyTextMessageProvider;
    int32_t SaveSlotIndex;
    bool m_highlighted;
    struct Transform* PromptPosition;
    struct Renderer* Screenshot;
    struct Renderer* ScreenshotB;
    struct GameObject* SaveGroup;
    struct GameObject* EmptyGroup;
    struct GameObject* FullyCompletedGroup;
    struct GameObject* DeathGroup;
    struct GameObject* ErrorGroup;
    struct GameObject* BusyNotification;
    struct GameObject* DifficultyEasy;
    struct GameObject* DifficultyNormal;
    struct GameObject* DifficultyHard;
    struct GameObject* DifficultyOneLife;
    struct Texture* EmptyTexture;
    struct GameObject* BackupSaveSlotPrefab;
    bool m_hasPlayedBackupsOpenSound;
    struct SoundProvider* BackupsOpenSound;
    struct SoundProvider* BackupsSelectSound;
    struct Vector2 Size;
    struct Vector2 Center;
    struct BaseAnimator* HighlightAnimator;
    struct BaseAnimator* CopyingAnimator;
    struct BaseAnimator* DeletingAnimator;
    struct BaseAnimator* BusyAnimator;
    struct BaseAnimator* HighlightAnimatorB;
    struct BaseAnimator* BackupsAnimator;
    struct GameObject* DifficultyScreen;
    struct Vector3 InitPosition;
    bool DisableInteraction;
    struct Rect m_bounds;
    int32_t m_backupIndex;
    struct List_1_BackupSaveSlotUI_* m_backupSaveSlots;
    bool m_backupsNeedUpdating;
    bool m_isDeleting;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SaveSlotUI__Fields_FWDDECL)
#define IL2CPP_STRUCT_SaveSlotUI__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_BackupSaveSlotUI_.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/TranslatedMessageProvider.h>
#endif
#undef IL2CPP_STRUCT_SaveSlotUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotUI__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SaveSlotUI__Fields_FWDDECL)
#include <Modloader/app/structs/SaveSlotUI__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SaveSlotUI__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
