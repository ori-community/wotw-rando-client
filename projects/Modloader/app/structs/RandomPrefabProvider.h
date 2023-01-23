#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RandomPrefabProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RandomPrefabProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_RandomPrefabProvider_DEFINED)
#include <Modloader/app/structs/RandomPrefabProvider__Fields.h>
#if defined(IL2CPP_STRUCT_RandomPrefabProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_RandomPrefabProvider_DEFINED
struct RandomPrefabProvider__Class;
struct RandomPrefabProvider {
    struct RandomPrefabProvider__Class* klass;
    MonitorData* monitor;
    struct RandomPrefabProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RandomPrefabProvider_FWDDECL)
#define IL2CPP_STRUCT_RandomPrefabProvider_FWDDECL
#include <Modloader/app/structs/RandomPrefabProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_RandomPrefabProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_RandomPrefabProvider_DEFINED) && !defined(IL2CPP_STRUCT_RandomPrefabProvider_FWDDECL)
#include <Modloader/app/structs/RandomPrefabProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RandomPrefabProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
