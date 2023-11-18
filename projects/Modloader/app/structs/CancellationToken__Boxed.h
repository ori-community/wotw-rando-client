#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CancellationToken__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CancellationToken__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CancellationToken__Boxed_DEFINED)
#include <Modloader/app/structs/CancellationToken.h>
#if defined(IL2CPP_STRUCT_CancellationToken_DEFINED)
#define IL2CPP_STRUCT_CancellationToken__Boxed_DEFINED
struct CancellationToken__Class;
struct CancellationToken__Boxed {
    struct CancellationToken__Class* klass;
    MonitorData* monitor;
    struct CancellationToken fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CancellationToken__Boxed_FWDDECL)
#define IL2CPP_STRUCT_CancellationToken__Boxed_FWDDECL
#include <Modloader/app/structs/CancellationToken__Class.h>
#endif
#undef IL2CPP_STRUCT_CancellationToken__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CancellationToken__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_CancellationToken__Boxed_FWDDECL)
#include <Modloader/app/structs/CancellationToken__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CancellationToken__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
