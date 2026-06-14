#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CullResults__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CullResults__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CullResults__Boxed_DEFINED)
#include <Modloader/app/structs/CullResults.h>
#if defined(IL2CPP_STRUCT_CullResults_DEFINED)
#define IL2CPP_STRUCT_CullResults__Boxed_DEFINED
struct CullResults__Class;
struct CullResults__Boxed {
    struct CullResults__Class* klass;
    MonitorData* monitor;
    struct CullResults fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CullResults__Boxed_FWDDECL)
#define IL2CPP_STRUCT_CullResults__Boxed_FWDDECL
#include <Modloader/app/structs/CullResults__Class.h>
#endif
#undef IL2CPP_STRUCT_CullResults__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CullResults__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_CullResults__Boxed_FWDDECL)
#include <Modloader/app/structs/CullResults__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CullResults__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
