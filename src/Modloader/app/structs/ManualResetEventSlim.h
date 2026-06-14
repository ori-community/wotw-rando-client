#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ManualResetEventSlim_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ManualResetEventSlim_INITIALIZING
#if !defined(IL2CPP_STRUCT_ManualResetEventSlim_DEFINED)
#include <Modloader/app/structs/ManualResetEventSlim__Fields.h>
#if defined(IL2CPP_STRUCT_ManualResetEventSlim__Fields_DEFINED)
#define IL2CPP_STRUCT_ManualResetEventSlim_DEFINED
struct ManualResetEventSlim__Class;
struct ManualResetEventSlim {
    struct ManualResetEventSlim__Class* klass;
    MonitorData* monitor;
    struct ManualResetEventSlim__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ManualResetEventSlim_FWDDECL)
#define IL2CPP_STRUCT_ManualResetEventSlim_FWDDECL
#include <Modloader/app/structs/ManualResetEventSlim__Class.h>
#endif
#undef IL2CPP_STRUCT_ManualResetEventSlim_INITIALIZING
#if !defined(IL2CPP_STRUCT_ManualResetEventSlim_DEFINED) && !defined(IL2CPP_STRUCT_ManualResetEventSlim_FWDDECL)
#include <Modloader/app/structs/ManualResetEventSlim.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ManualResetEventSlim.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
