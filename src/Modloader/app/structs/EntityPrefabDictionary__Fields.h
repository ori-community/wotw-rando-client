#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityPrefabDictionary__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityPrefabDictionary__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityPrefabDictionary__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/ScreenshotIcon_EnemyType__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_ScreenshotIcon_EnemyType__Enum_DEFINED)
#define IL2CPP_STRUCT_EntityPrefabDictionary__Fields_DEFINED
struct List_1_UnityEngine_GameObject_;
struct List_1_ScreenshotIcon_EnemyType_;
struct Dictionary_2_UnityEngine_GameObject_ScreenshotIcon_EnemyType_;
struct EntityPrefabDictionary__Fields {
    struct MonoBehaviour__Fields _;
    ScreenshotIcon_EnemyType__Enum Missing;

    struct List_1_UnityEngine_GameObject_* m_keys;
    struct List_1_ScreenshotIcon_EnemyType_* m_values;
    struct Dictionary_2_UnityEngine_GameObject_ScreenshotIcon_EnemyType_* m_dictionary;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityPrefabDictionary__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityPrefabDictionary__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_UnityEngine_GameObject_ScreenshotIcon_EnemyType_.h>
#include <Modloader/app/structs/List_1_ScreenshotIcon_EnemyType_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#endif
#undef IL2CPP_STRUCT_EntityPrefabDictionary__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityPrefabDictionary__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityPrefabDictionary__Fields_FWDDECL)
#include <Modloader/app/structs/EntityPrefabDictionary__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityPrefabDictionary__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
