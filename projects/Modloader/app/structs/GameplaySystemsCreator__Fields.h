#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameplaySystemsCreator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameplaySystemsCreator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameplaySystemsCreator__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_GameplaySystemsCreator__Fields_DEFINED
struct GameObject;
struct GameplaySystemsCreator__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* OriPrefab;
    struct GameObject* WorldMapLogicPrefab;
    struct GameObject* SeinUIPrefab;
    struct GameObject* SpellSettingsPrefab;
    struct GameObject* SpiritShardSettingsPrefab;
    struct GameObject* QuestsControllerPrefab;
    struct GameObject* EquipmentWheelPrefab;
    struct GameObject* SeinStatsPrefab;
    struct GameObject* DamageByAreaResolver;
    struct GameObject* MaterialVFXManagerPrefab;
    struct GameObject* BehaviourTreeEvaluationSystemPrefab;
    bool LoadSystemsScene;
    bool LoadInGameUIScene;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameplaySystemsCreator__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameplaySystemsCreator__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_GameplaySystemsCreator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameplaySystemsCreator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameplaySystemsCreator__Fields_FWDDECL)
#include <Modloader/app/structs/GameplaySystemsCreator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameplaySystemsCreator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
