#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NetworkStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NetworkStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetworkStream_DEFINED)
#include <Modloader/app/structs/NetworkStream__Fields.h>
#if defined(IL2CPP_STRUCT_NetworkStream__Fields_DEFINED)
#define IL2CPP_STRUCT_NetworkStream_DEFINED
struct NetworkStream__Class;
struct NetworkStream {
    struct NetworkStream__Class* klass;
    MonitorData* monitor;
    struct NetworkStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NetworkStream_FWDDECL)
#define IL2CPP_STRUCT_NetworkStream_FWDDECL
#include <Modloader/app/structs/NetworkStream__Class.h>
#endif
#undef IL2CPP_STRUCT_NetworkStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetworkStream_DEFINED) && !defined(IL2CPP_STRUCT_NetworkStream_FWDDECL)
#include <Modloader/app/structs/NetworkStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NetworkStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
