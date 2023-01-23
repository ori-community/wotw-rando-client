#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileStream_DEFINED)
#include <Modloader/app/structs/FileStream__Fields.h>
#if defined(IL2CPP_STRUCT_FileStream__Fields_DEFINED)
#define IL2CPP_STRUCT_FileStream_DEFINED
struct FileStream__Class;
struct FileStream {
    struct FileStream__Class* klass;
    MonitorData* monitor;
    struct FileStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FileStream_FWDDECL)
#define IL2CPP_STRUCT_FileStream_FWDDECL
#include <Modloader/app/structs/FileStream__Class.h>
#endif
#undef IL2CPP_STRUCT_FileStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileStream_DEFINED) && !defined(IL2CPP_STRUCT_FileStream_FWDDECL)
#include <Modloader/app/structs/FileStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
