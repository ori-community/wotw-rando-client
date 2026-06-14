#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ApplyForceOnDamage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ApplyForceOnDamage_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApplyForceOnDamage_DEFINED)
#include <Modloader/app/structs/ApplyForceOnDamage__Fields.h>
#if defined(IL2CPP_STRUCT_ApplyForceOnDamage__Fields_DEFINED)
#define IL2CPP_STRUCT_ApplyForceOnDamage_DEFINED
struct ApplyForceOnDamage__Class;
struct ApplyForceOnDamage {
    struct ApplyForceOnDamage__Class* klass;
    MonitorData* monitor;
    struct ApplyForceOnDamage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ApplyForceOnDamage_FWDDECL)
#define IL2CPP_STRUCT_ApplyForceOnDamage_FWDDECL
#include <Modloader/app/structs/ApplyForceOnDamage__Class.h>
#endif
#undef IL2CPP_STRUCT_ApplyForceOnDamage_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApplyForceOnDamage_DEFINED) && !defined(IL2CPP_STRUCT_ApplyForceOnDamage_FWDDECL)
#include <Modloader/app/structs/ApplyForceOnDamage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ApplyForceOnDamage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
