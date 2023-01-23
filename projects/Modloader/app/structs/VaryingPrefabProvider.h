#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VaryingPrefabProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VaryingPrefabProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_VaryingPrefabProvider_DEFINED)
#include <Modloader/app/structs/VaryingPrefabProvider__Fields.h>
#if defined(IL2CPP_STRUCT_VaryingPrefabProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_VaryingPrefabProvider_DEFINED
struct VaryingPrefabProvider__Class;
struct VaryingPrefabProvider {
    struct VaryingPrefabProvider__Class* klass;
    MonitorData* monitor;
    struct VaryingPrefabProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VaryingPrefabProvider_FWDDECL)
#define IL2CPP_STRUCT_VaryingPrefabProvider_FWDDECL
#include <Modloader/app/structs/VaryingPrefabProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_VaryingPrefabProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_VaryingPrefabProvider_DEFINED) && !defined(IL2CPP_STRUCT_VaryingPrefabProvider_FWDDECL)
#include <Modloader/app/structs/VaryingPrefabProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VaryingPrefabProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
