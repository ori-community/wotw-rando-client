#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RunActionOnce_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RunActionOnce_INITIALIZING
#if !defined(IL2CPP_STRUCT_RunActionOnce_DEFINED)
#include <Modloader/app/structs/RunActionOnce__Fields.h>
#if defined(IL2CPP_STRUCT_RunActionOnce__Fields_DEFINED)
#define IL2CPP_STRUCT_RunActionOnce_DEFINED
struct RunActionOnce__Class;
struct RunActionOnce {
    struct RunActionOnce__Class* klass;
    MonitorData* monitor;
    struct RunActionOnce__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RunActionOnce_FWDDECL)
#define IL2CPP_STRUCT_RunActionOnce_FWDDECL
#include <Modloader/app/structs/RunActionOnce__Class.h>
#endif
#undef IL2CPP_STRUCT_RunActionOnce_INITIALIZING
#if !defined(IL2CPP_STRUCT_RunActionOnce_DEFINED) && !defined(IL2CPP_STRUCT_RunActionOnce_FWDDECL)
#include <Modloader/app/structs/RunActionOnce.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RunActionOnce.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
