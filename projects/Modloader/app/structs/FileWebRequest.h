#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileWebRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileWebRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileWebRequest_DEFINED)
#include <Modloader/app/structs/FileWebRequest__Fields.h>
#if defined(IL2CPP_STRUCT_FileWebRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_FileWebRequest_DEFINED
struct FileWebRequest__Class;
struct FileWebRequest {
    struct FileWebRequest__Class* klass;
    MonitorData* monitor;
    struct FileWebRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FileWebRequest_FWDDECL)
#define IL2CPP_STRUCT_FileWebRequest_FWDDECL
#include <Modloader/app/structs/FileWebRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_FileWebRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileWebRequest_DEFINED) && !defined(IL2CPP_STRUCT_FileWebRequest_FWDDECL)
#include <Modloader/app/structs/FileWebRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileWebRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
