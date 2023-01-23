#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileSet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileSet_DEFINED)
#include <Modloader/app/structs/FileSet__Fields.h>
#if defined(IL2CPP_STRUCT_FileSet__Fields_DEFINED)
#define IL2CPP_STRUCT_FileSet_DEFINED
struct FileSet__Class;
struct FileSet {
    struct FileSet__Class* klass;
    MonitorData* monitor;
    struct FileSet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FileSet_FWDDECL)
#define IL2CPP_STRUCT_FileSet_FWDDECL
#include <Modloader/app/structs/FileSet__Class.h>
#endif
#undef IL2CPP_STRUCT_FileSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileSet_DEFINED) && !defined(IL2CPP_STRUCT_FileSet_FWDDECL)
#include <Modloader/app/structs/FileSet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileSet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
