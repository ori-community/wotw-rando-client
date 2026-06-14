#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnemiesSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnemiesSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemiesSettings__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_EnemiesSettings__Fields_DEFINED
struct EnemiesIconsCollection;
struct EntitiesTypeDictionary;
struct EntityPrefabDictionary;
struct EnemiesSettings__Fields {
    struct MonoBehaviour__Fields _;
    struct EnemiesIconsCollection* Icons;
    struct EntitiesTypeDictionary* TypeDictionary;
    struct EntityPrefabDictionary* PrefabDictionary;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnemiesSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_EnemiesSettings__Fields_FWDDECL
#include <Modloader/app/structs/EnemiesIconsCollection.h>
#include <Modloader/app/structs/EntitiesTypeDictionary.h>
#include <Modloader/app/structs/EntityPrefabDictionary.h>
#endif
#undef IL2CPP_STRUCT_EnemiesSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemiesSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EnemiesSettings__Fields_FWDDECL)
#include <Modloader/app/structs/EnemiesSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnemiesSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
