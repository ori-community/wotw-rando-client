#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageTypePrefabPair_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageTypePrefabPair_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageTypePrefabPair_DEFINED)
#include <Modloader/app/structs/DamageTypePrefabPair__Fields.h>
#if defined(IL2CPP_STRUCT_DamageTypePrefabPair__Fields_DEFINED)
#define IL2CPP_STRUCT_DamageTypePrefabPair_DEFINED
struct DamageTypePrefabPair__Class;
struct DamageTypePrefabPair {
    struct DamageTypePrefabPair__Class* klass;
    MonitorData* monitor;
    struct DamageTypePrefabPair__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageTypePrefabPair_FWDDECL)
#define IL2CPP_STRUCT_DamageTypePrefabPair_FWDDECL
#include <Modloader/app/structs/DamageTypePrefabPair__Class.h>
#endif
#undef IL2CPP_STRUCT_DamageTypePrefabPair_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageTypePrefabPair_DEFINED) && !defined(IL2CPP_STRUCT_DamageTypePrefabPair_FWDDECL)
#include <Modloader/app/structs/DamageTypePrefabPair.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageTypePrefabPair.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
