#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Initialization__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Initialization__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Initialization__Boxed_DEFINED)
#include <Modloader/app/structs/Initialization.h>
#if defined(IL2CPP_STRUCT_Initialization_DEFINED)
#define IL2CPP_STRUCT_Initialization__Boxed_DEFINED
struct Initialization__Class;
struct Initialization__Boxed {
    struct Initialization__Class* klass;
    MonitorData* monitor;
    struct Initialization fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Initialization__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Initialization__Boxed_FWDDECL
#include <Modloader/app/structs/Initialization__Class.h>
#endif
#undef IL2CPP_STRUCT_Initialization__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Initialization__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Initialization__Boxed_FWDDECL)
#include <Modloader/app/structs/Initialization__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Initialization__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
