#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PrefabProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PrefabProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrefabProvider_DEFINED)
#include <Modloader/app/structs/PrefabProvider__Fields.h>
#if defined(IL2CPP_STRUCT_PrefabProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_PrefabProvider_DEFINED
struct PrefabProvider__Class;
struct PrefabProvider {
    struct PrefabProvider__Class* klass;
    MonitorData* monitor;
    struct PrefabProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PrefabProvider_FWDDECL)
#define IL2CPP_STRUCT_PrefabProvider_FWDDECL
#include <Modloader/app/structs/PrefabProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_PrefabProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrefabProvider_DEFINED) && !defined(IL2CPP_STRUCT_PrefabProvider_FWDDECL)
#include <Modloader/app/structs/PrefabProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PrefabProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
