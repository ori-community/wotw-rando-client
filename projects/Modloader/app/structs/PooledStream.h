#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PooledStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PooledStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_PooledStream_DEFINED)
#include <Modloader/app/structs/PooledStream__Fields.h>
#if defined(IL2CPP_STRUCT_PooledStream__Fields_DEFINED)
#define IL2CPP_STRUCT_PooledStream_DEFINED
struct PooledStream__Class;
struct PooledStream {
    struct PooledStream__Class* klass;
    MonitorData* monitor;
    struct PooledStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PooledStream_FWDDECL)
#define IL2CPP_STRUCT_PooledStream_FWDDECL
#include <Modloader/app/structs/PooledStream__Class.h>
#endif
#undef IL2CPP_STRUCT_PooledStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_PooledStream_DEFINED) && !defined(IL2CPP_STRUCT_PooledStream_FWDDECL)
#include <Modloader/app/structs/PooledStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PooledStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
