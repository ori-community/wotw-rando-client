#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileStream_ReadDelegate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileStream_ReadDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileStream_ReadDelegate_DEFINED)
#include <Modloader/app/structs/FileStream_ReadDelegate__Fields.h>
#if defined(IL2CPP_STRUCT_FileStream_ReadDelegate__Fields_DEFINED)
#define IL2CPP_STRUCT_FileStream_ReadDelegate_DEFINED
struct FileStream_ReadDelegate__Class;
struct FileStream_ReadDelegate {
    struct FileStream_ReadDelegate__Class* klass;
    MonitorData* monitor;
    struct FileStream_ReadDelegate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FileStream_ReadDelegate_FWDDECL)
#define IL2CPP_STRUCT_FileStream_ReadDelegate_FWDDECL
#include <Modloader/app/structs/FileStream_ReadDelegate__Class.h>
#endif
#undef IL2CPP_STRUCT_FileStream_ReadDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileStream_ReadDelegate_DEFINED) && !defined(IL2CPP_STRUCT_FileStream_ReadDelegate_FWDDECL)
#include <Modloader/app/structs/FileStream_ReadDelegate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileStream_ReadDelegate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
