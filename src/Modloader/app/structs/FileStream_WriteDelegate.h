#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileStream_WriteDelegate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileStream_WriteDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileStream_WriteDelegate_DEFINED)
#include <Modloader/app/structs/FileStream_WriteDelegate__Fields.h>
#if defined(IL2CPP_STRUCT_FileStream_WriteDelegate__Fields_DEFINED)
#define IL2CPP_STRUCT_FileStream_WriteDelegate_DEFINED
struct FileStream_WriteDelegate__Class;
struct FileStream_WriteDelegate {
    struct FileStream_WriteDelegate__Class* klass;
    MonitorData* monitor;
    struct FileStream_WriteDelegate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FileStream_WriteDelegate_FWDDECL)
#define IL2CPP_STRUCT_FileStream_WriteDelegate_FWDDECL
#include <Modloader/app/structs/FileStream_WriteDelegate__Class.h>
#endif
#undef IL2CPP_STRUCT_FileStream_WriteDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileStream_WriteDelegate_DEFINED) && !defined(IL2CPP_STRUCT_FileStream_WriteDelegate_FWDDECL)
#include <Modloader/app/structs/FileStream_WriteDelegate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileStream_WriteDelegate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
