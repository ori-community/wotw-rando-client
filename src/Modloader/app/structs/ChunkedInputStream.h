#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChunkedInputStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChunkedInputStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChunkedInputStream_DEFINED)
#include <Modloader/app/structs/ChunkedInputStream__Fields.h>
#if defined(IL2CPP_STRUCT_ChunkedInputStream__Fields_DEFINED)
#define IL2CPP_STRUCT_ChunkedInputStream_DEFINED
struct ChunkedInputStream__Class;
struct ChunkedInputStream {
    struct ChunkedInputStream__Class* klass;
    MonitorData* monitor;
    struct ChunkedInputStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChunkedInputStream_FWDDECL)
#define IL2CPP_STRUCT_ChunkedInputStream_FWDDECL
#include <Modloader/app/structs/ChunkedInputStream__Class.h>
#endif
#undef IL2CPP_STRUCT_ChunkedInputStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChunkedInputStream_DEFINED) && !defined(IL2CPP_STRUCT_ChunkedInputStream_FWDDECL)
#include <Modloader/app/structs/ChunkedInputStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChunkedInputStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
