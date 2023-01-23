#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageResolver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageResolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageResolver_DEFINED)
#include <Modloader/app/structs/DamageResolver__Fields.h>
#if defined(IL2CPP_STRUCT_DamageResolver__Fields_DEFINED)
#define IL2CPP_STRUCT_DamageResolver_DEFINED
struct DamageResolver__Class;
struct DamageResolver {
    struct DamageResolver__Class* klass;
    MonitorData* monitor;
    struct DamageResolver__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageResolver_FWDDECL)
#define IL2CPP_STRUCT_DamageResolver_FWDDECL
#include <Modloader/app/structs/DamageResolver__Class.h>
#endif
#undef IL2CPP_STRUCT_DamageResolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageResolver_DEFINED) && !defined(IL2CPP_STRUCT_DamageResolver_FWDDECL)
#include <Modloader/app/structs/DamageResolver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageResolver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
