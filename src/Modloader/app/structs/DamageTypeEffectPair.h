#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageTypeEffectPair_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageTypeEffectPair_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageTypeEffectPair_DEFINED)
#include <Modloader/app/structs/DamageTypeEffectPair__Fields.h>
#if defined(IL2CPP_STRUCT_DamageTypeEffectPair__Fields_DEFINED)
#define IL2CPP_STRUCT_DamageTypeEffectPair_DEFINED
struct DamageTypeEffectPair__Class;
struct DamageTypeEffectPair {
    struct DamageTypeEffectPair__Class* klass;
    MonitorData* monitor;
    struct DamageTypeEffectPair__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageTypeEffectPair_FWDDECL)
#define IL2CPP_STRUCT_DamageTypeEffectPair_FWDDECL
#include <Modloader/app/structs/DamageTypeEffectPair__Class.h>
#endif
#undef IL2CPP_STRUCT_DamageTypeEffectPair_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageTypeEffectPair_DEFINED) && !defined(IL2CPP_STRUCT_DamageTypeEffectPair_FWDDECL)
#include <Modloader/app/structs/DamageTypeEffectPair.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageTypeEffectPair.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
