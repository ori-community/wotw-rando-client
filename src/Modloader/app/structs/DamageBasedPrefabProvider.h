#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageBasedPrefabProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageBasedPrefabProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageBasedPrefabProvider_DEFINED)
#include <Modloader/app/structs/DamageBasedPrefabProvider__Fields.h>
#if defined(IL2CPP_STRUCT_DamageBasedPrefabProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_DamageBasedPrefabProvider_DEFINED
struct DamageBasedPrefabProvider__Class;
struct DamageBasedPrefabProvider {
    struct DamageBasedPrefabProvider__Class* klass;
    MonitorData* monitor;
    struct DamageBasedPrefabProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageBasedPrefabProvider_FWDDECL)
#define IL2CPP_STRUCT_DamageBasedPrefabProvider_FWDDECL
#include <Modloader/app/structs/DamageBasedPrefabProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_DamageBasedPrefabProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageBasedPrefabProvider_DEFINED) && !defined(IL2CPP_STRUCT_DamageBasedPrefabProvider_FWDDECL)
#include <Modloader/app/structs/DamageBasedPrefabProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageBasedPrefabProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
