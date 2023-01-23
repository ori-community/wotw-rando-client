#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/CharacterFactory_Characters__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_CharacterFactory_Characters__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinPlaceholder__Fields_DEFINED
struct GameObject;
struct SceneRoot;
struct ConditionUberState;
struct SeinPlaceholder__Fields {
    struct MonoBehaviour__Fields _;
    CharacterFactory_Characters__Enum Character;

    struct GameObject* GameplaySystems;
    struct SceneRoot* SceneRoot;
    struct GameObject* CharacterPrefab;
    struct ConditionUberState* KuIsDeadUberState;
    struct GameObject* m_auxiliaryCharacterPrefab;
    bool m_spawnPerformed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinPlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/ConditionUberState.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SceneRoot.h>
#endif
#undef IL2CPP_STRUCT_SeinPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/SeinPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
