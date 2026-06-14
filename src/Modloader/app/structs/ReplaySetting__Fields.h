#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReplaySetting__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReplaySetting__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplaySetting__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#include <Modloader/app/structs/SkipCutscene_GameplayMode__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED) && defined(IL2CPP_STRUCT_SkipCutscene_GameplayMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_ReplaySetting__Fields_DEFINED
struct MessageProvider;
struct Texture2D;
struct SceneMetaData;
struct ConditionUberState;
struct DesiredUberStateComposite;
struct List_1_SceneMetaData_;
struct Byte__Array;
struct SceneMetaData_SeinAbilitiesWotW;
struct SceneMetaData_SeinEquipmentWotW__Array;
struct SceneMetaData_SeinEquipmentWotW;
struct ReplaySetting__Fields {
    struct ScriptableObject__Fields _;
    struct MessageProvider* Description;
    SkipCutscene_GameplayMode__Enum GameplayMode;

    struct Texture2D* LoremasterIcon;
    bool IsPlayable;
    struct SceneMetaData* LoremasterScene;
    struct ConditionUberState* ReplayUnlocked;
    struct ConditionUberState* ReplayCompleted;
    struct DesiredUberStateComposite* StateOverride;
    struct SceneMetaData* Scene;
    struct List_1_SceneMetaData_* Preloads;
    bool UseTriggerToEndReplay;
    struct Byte__Array* UberStateValueStoreData;
    bool OverrideEquipmentAndAbilities;
    struct SceneMetaData_SeinAbilitiesWotW* Abilities;
    struct SceneMetaData_SeinAbilitiesWotW* m_cachedAbilities;
    struct SceneMetaData_SeinEquipmentWotW__Array* Equipment;
    struct SceneMetaData_SeinEquipmentWotW__Array* m_cachedEquipment;
    struct SceneMetaData_SeinEquipmentWotW* DefaultXButtonEquipment;
    struct SceneMetaData_SeinEquipmentWotW* DefaultYButtonEquipment;
    struct SceneMetaData_SeinEquipmentWotW* DefaultBButtonEquipment;
    struct SceneMetaData_SeinEquipmentWotW* m_cachedDefaultXButtonEquipment;
    struct SceneMetaData_SeinEquipmentWotW* m_cachedDefaultYButtonEquipment;
    struct SceneMetaData_SeinEquipmentWotW* m_cachedDefaultBButtonEquipment;
    bool ShouldOverridePosition;
    struct Vector2 OverridePosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReplaySetting__Fields_FWDDECL)
#define IL2CPP_STRUCT_ReplaySetting__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/ConditionUberState.h>
#include <Modloader/app/structs/DesiredUberStateComposite.h>
#include <Modloader/app/structs/List_1_SceneMetaData_.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/SceneMetaData.h>
#include <Modloader/app/structs/SceneMetaData_SeinAbilitiesWotW.h>
#include <Modloader/app/structs/SceneMetaData_SeinEquipmentWotW.h>
#include <Modloader/app/structs/SceneMetaData_SeinEquipmentWotW__Array.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_ReplaySetting__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplaySetting__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ReplaySetting__Fields_FWDDECL)
#include <Modloader/app/structs/ReplaySetting__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReplaySetting__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
