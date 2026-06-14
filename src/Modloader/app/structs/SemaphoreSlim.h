#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SemaphoreSlim_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SemaphoreSlim_INITIALIZING
#if !defined(IL2CPP_STRUCT_SemaphoreSlim_DEFINED)
#include <Modloader/app/structs/SemaphoreSlim__Fields.h>
#if defined(IL2CPP_STRUCT_SemaphoreSlim__Fields_DEFINED)
#define IL2CPP_STRUCT_SemaphoreSlim_DEFINED
struct SemaphoreSlim__Class;
struct SemaphoreSlim {
    struct SemaphoreSlim__Class* klass;
    MonitorData* monitor;
    struct SemaphoreSlim__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SemaphoreSlim_FWDDECL)
#define IL2CPP_STRUCT_SemaphoreSlim_FWDDECL
#include <Modloader/app/structs/SemaphoreSlim__Class.h>
#endif
#undef IL2CPP_STRUCT_SemaphoreSlim_INITIALIZING
#if !defined(IL2CPP_STRUCT_SemaphoreSlim_DEFINED) && !defined(IL2CPP_STRUCT_SemaphoreSlim_FWDDECL)
#include <Modloader/app/structs/SemaphoreSlim.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SemaphoreSlim.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
