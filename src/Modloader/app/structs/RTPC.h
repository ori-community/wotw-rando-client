#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RTPC_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RTPC_INITIALIZING
#if !defined(IL2CPP_STRUCT_RTPC_DEFINED)
#include <Modloader/app/structs/RTPC__Fields.h>
#if defined(IL2CPP_STRUCT_RTPC__Fields_DEFINED)
#define IL2CPP_STRUCT_RTPC_DEFINED
struct RTPC__Class;
struct RTPC {
    struct RTPC__Class* klass;
    MonitorData* monitor;
    struct RTPC__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RTPC_FWDDECL)
#define IL2CPP_STRUCT_RTPC_FWDDECL
#include <Modloader/app/structs/RTPC__Class.h>
#endif
#undef IL2CPP_STRUCT_RTPC_INITIALIZING
#if !defined(IL2CPP_STRUCT_RTPC_DEFINED) && !defined(IL2CPP_STRUCT_RTPC_FWDDECL)
#include <Modloader/app/structs/RTPC.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RTPC.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
