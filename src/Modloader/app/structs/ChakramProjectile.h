#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChakramProjectile_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChakramProjectile_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChakramProjectile_DEFINED)
#include <Modloader/app/structs/ChakramProjectile__Fields.h>
#if defined(IL2CPP_STRUCT_ChakramProjectile__Fields_DEFINED)
#define IL2CPP_STRUCT_ChakramProjectile_DEFINED
struct ChakramProjectile__Class;
struct ChakramProjectile {
    struct ChakramProjectile__Class* klass;
    MonitorData* monitor;
    struct ChakramProjectile__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChakramProjectile_FWDDECL)
#define IL2CPP_STRUCT_ChakramProjectile_FWDDECL
#include <Modloader/app/structs/ChakramProjectile__Class.h>
#endif
#undef IL2CPP_STRUCT_ChakramProjectile_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChakramProjectile_DEFINED) && !defined(IL2CPP_STRUCT_ChakramProjectile_FWDDECL)
#include <Modloader/app/structs/ChakramProjectile.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChakramProjectile.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
