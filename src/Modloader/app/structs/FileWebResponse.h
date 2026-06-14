#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileWebResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileWebResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileWebResponse_DEFINED)
#include <Modloader/app/structs/FileWebResponse__Fields.h>
#if defined(IL2CPP_STRUCT_FileWebResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_FileWebResponse_DEFINED
struct FileWebResponse__Class;
struct FileWebResponse {
    struct FileWebResponse__Class* klass;
    MonitorData* monitor;
    struct FileWebResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FileWebResponse_FWDDECL)
#define IL2CPP_STRUCT_FileWebResponse_FWDDECL
#include <Modloader/app/structs/FileWebResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_FileWebResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileWebResponse_DEFINED) && !defined(IL2CPP_STRUCT_FileWebResponse_FWDDECL)
#include <Modloader/app/structs/FileWebResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileWebResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
