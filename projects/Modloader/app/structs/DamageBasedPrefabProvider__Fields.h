#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageBasedPrefabProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageBasedPrefabProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageBasedPrefabProvider__Fields_DEFINED)
#include <Modloader/app/structs/PrefabProvider__Fields.h>
#if defined(IL2CPP_STRUCT_PrefabProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_DamageBasedPrefabProvider__Fields_DEFINED
struct List_1_DamageTypePrefabPair_;
struct PrefabProvider;
struct DamageBasedPrefabProvider__Fields {
    struct PrefabProvider__Fields _;
    struct List_1_DamageTypePrefabPair_* Prefabs;
    struct PrefabProvider* Default;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageBasedPrefabProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_DamageBasedPrefabProvider__Fields_FWDDECL
#include <Modloader/app/structs/List_1_DamageTypePrefabPair_.h>
#include <Modloader/app/structs/PrefabProvider.h>
#endif
#undef IL2CPP_STRUCT_DamageBasedPrefabProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageBasedPrefabProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DamageBasedPrefabProvider__Fields_FWDDECL)
#include <Modloader/app/structs/DamageBasedPrefabProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageBasedPrefabProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
