#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileStreamAsyncResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileStreamAsyncResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileStreamAsyncResult_DEFINED)
#include <Modloader/app/structs/FileStreamAsyncResult__Fields.h>
#if defined(IL2CPP_STRUCT_FileStreamAsyncResult__Fields_DEFINED)
#define IL2CPP_STRUCT_FileStreamAsyncResult_DEFINED
struct FileStreamAsyncResult__Class;
struct FileStreamAsyncResult {
    struct FileStreamAsyncResult__Class* klass;
    MonitorData* monitor;
    struct FileStreamAsyncResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FileStreamAsyncResult_FWDDECL)
#define IL2CPP_STRUCT_FileStreamAsyncResult_FWDDECL
#include <Modloader/app/structs/FileStreamAsyncResult__Class.h>
#endif
#undef IL2CPP_STRUCT_FileStreamAsyncResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileStreamAsyncResult_DEFINED) && !defined(IL2CPP_STRUCT_FileStreamAsyncResult_FWDDECL)
#include <Modloader/app/structs/FileStreamAsyncResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileStreamAsyncResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
