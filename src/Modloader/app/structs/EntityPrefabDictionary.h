#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityPrefabDictionary_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityPrefabDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityPrefabDictionary_DEFINED)
#include <Modloader/app/structs/EntityPrefabDictionary__Fields.h>
#if defined(IL2CPP_STRUCT_EntityPrefabDictionary__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityPrefabDictionary_DEFINED
struct EntityPrefabDictionary__Class;
struct EntityPrefabDictionary {
    struct EntityPrefabDictionary__Class* klass;
    MonitorData* monitor;
    struct EntityPrefabDictionary__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityPrefabDictionary_FWDDECL)
#define IL2CPP_STRUCT_EntityPrefabDictionary_FWDDECL
#include <Modloader/app/structs/EntityPrefabDictionary__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityPrefabDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityPrefabDictionary_DEFINED) && !defined(IL2CPP_STRUCT_EntityPrefabDictionary_FWDDECL)
#include <Modloader/app/structs/EntityPrefabDictionary.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityPrefabDictionary.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
