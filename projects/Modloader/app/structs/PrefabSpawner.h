#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PrefabSpawner_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PrefabSpawner_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrefabSpawner_DEFINED)
#include <Modloader/app/structs/PrefabSpawner__Fields.h>
#if defined(IL2CPP_STRUCT_PrefabSpawner__Fields_DEFINED)
#define IL2CPP_STRUCT_PrefabSpawner_DEFINED
struct PrefabSpawner__Class;
struct PrefabSpawner {
    struct PrefabSpawner__Class* klass;
    MonitorData* monitor;
    struct PrefabSpawner__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PrefabSpawner_FWDDECL)
#define IL2CPP_STRUCT_PrefabSpawner_FWDDECL
#include <Modloader/app/structs/PrefabSpawner__Class.h>
#endif
#undef IL2CPP_STRUCT_PrefabSpawner_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrefabSpawner_DEFINED) && !defined(IL2CPP_STRUCT_PrefabSpawner_FWDDECL)
#include <Modloader/app/structs/PrefabSpawner.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PrefabSpawner.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
