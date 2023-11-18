#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SharedStatics_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SharedStatics_INITIALIZING
#if !defined(IL2CPP_STRUCT_SharedStatics_DEFINED)
#include <Modloader/app/structs/SharedStatics__Fields.h>
#if defined(IL2CPP_STRUCT_SharedStatics__Fields_DEFINED)
#define IL2CPP_STRUCT_SharedStatics_DEFINED
struct SharedStatics__Class;
struct SharedStatics {
    struct SharedStatics__Class* klass;
    MonitorData* monitor;
    struct SharedStatics__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SharedStatics_FWDDECL)
#define IL2CPP_STRUCT_SharedStatics_FWDDECL
#include <Modloader/app/structs/SharedStatics__Class.h>
#endif
#undef IL2CPP_STRUCT_SharedStatics_INITIALIZING
#if !defined(IL2CPP_STRUCT_SharedStatics_DEFINED) && !defined(IL2CPP_STRUCT_SharedStatics_FWDDECL)
#include <Modloader/app/structs/SharedStatics.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SharedStatics.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
