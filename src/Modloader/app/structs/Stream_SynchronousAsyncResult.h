#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Stream_SynchronousAsyncResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Stream_SynchronousAsyncResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_Stream_SynchronousAsyncResult_DEFINED)
#include <Modloader/app/structs/Stream_SynchronousAsyncResult__Fields.h>
#if defined(IL2CPP_STRUCT_Stream_SynchronousAsyncResult__Fields_DEFINED)
#define IL2CPP_STRUCT_Stream_SynchronousAsyncResult_DEFINED
struct Stream_SynchronousAsyncResult__Class;
struct Stream_SynchronousAsyncResult {
    struct Stream_SynchronousAsyncResult__Class* klass;
    MonitorData* monitor;
    struct Stream_SynchronousAsyncResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Stream_SynchronousAsyncResult_FWDDECL)
#define IL2CPP_STRUCT_Stream_SynchronousAsyncResult_FWDDECL
#include <Modloader/app/structs/Stream_SynchronousAsyncResult__Class.h>
#endif
#undef IL2CPP_STRUCT_Stream_SynchronousAsyncResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_Stream_SynchronousAsyncResult_DEFINED) && !defined(IL2CPP_STRUCT_Stream_SynchronousAsyncResult_FWDDECL)
#include <Modloader/app/structs/Stream_SynchronousAsyncResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Stream_SynchronousAsyncResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
