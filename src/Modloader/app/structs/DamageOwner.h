#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageOwner_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageOwner_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageOwner_DEFINED)
#include <Modloader/app/structs/DamageOwner__Fields.h>
#if defined(IL2CPP_STRUCT_DamageOwner__Fields_DEFINED)
#define IL2CPP_STRUCT_DamageOwner_DEFINED
struct DamageOwner__Class;
struct DamageOwner {
    struct DamageOwner__Class* klass;
    MonitorData* monitor;
    struct DamageOwner__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageOwner_FWDDECL)
#define IL2CPP_STRUCT_DamageOwner_FWDDECL
#include <Modloader/app/structs/DamageOwner__Class.h>
#endif
#undef IL2CPP_STRUCT_DamageOwner_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageOwner_DEFINED) && !defined(IL2CPP_STRUCT_DamageOwner_FWDDECL)
#include <Modloader/app/structs/DamageOwner.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageOwner.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
