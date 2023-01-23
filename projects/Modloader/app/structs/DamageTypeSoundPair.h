#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageTypeSoundPair_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageTypeSoundPair_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageTypeSoundPair_DEFINED)
#include <Modloader/app/structs/DamageTypeSoundPair__Fields.h>
#if defined(IL2CPP_STRUCT_DamageTypeSoundPair__Fields_DEFINED)
#define IL2CPP_STRUCT_DamageTypeSoundPair_DEFINED
struct DamageTypeSoundPair__Class;
struct DamageTypeSoundPair {
    struct DamageTypeSoundPair__Class* klass;
    MonitorData* monitor;
    struct DamageTypeSoundPair__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageTypeSoundPair_FWDDECL)
#define IL2CPP_STRUCT_DamageTypeSoundPair_FWDDECL
#include <Modloader/app/structs/DamageTypeSoundPair__Class.h>
#endif
#undef IL2CPP_STRUCT_DamageTypeSoundPair_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageTypeSoundPair_DEFINED) && !defined(IL2CPP_STRUCT_DamageTypeSoundPair_FWDDECL)
#include <Modloader/app/structs/DamageTypeSoundPair.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageTypeSoundPair.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
