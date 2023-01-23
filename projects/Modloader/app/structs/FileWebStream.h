#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileWebStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileWebStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileWebStream_DEFINED)
#include <Modloader/app/structs/FileWebStream__Fields.h>
#if defined(IL2CPP_STRUCT_FileWebStream__Fields_DEFINED)
#define IL2CPP_STRUCT_FileWebStream_DEFINED
struct FileWebStream__Class;
struct FileWebStream {
    struct FileWebStream__Class* klass;
    MonitorData* monitor;
    struct FileWebStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FileWebStream_FWDDECL)
#define IL2CPP_STRUCT_FileWebStream_FWDDECL
#include <Modloader/app/structs/FileWebStream__Class.h>
#endif
#undef IL2CPP_STRUCT_FileWebStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileWebStream_DEFINED) && !defined(IL2CPP_STRUCT_FileWebStream_FWDDECL)
#include <Modloader/app/structs/FileWebStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileWebStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
