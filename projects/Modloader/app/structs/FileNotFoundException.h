#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileNotFoundException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileNotFoundException_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileNotFoundException_DEFINED)
#include <Modloader/app/structs/FileNotFoundException__Fields.h>
#if defined(IL2CPP_STRUCT_FileNotFoundException__Fields_DEFINED)
#define IL2CPP_STRUCT_FileNotFoundException_DEFINED
struct FileNotFoundException__Class;
struct FileNotFoundException {
    struct FileNotFoundException__Class* klass;
    MonitorData* monitor;
    struct FileNotFoundException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FileNotFoundException_FWDDECL)
#define IL2CPP_STRUCT_FileNotFoundException_FWDDECL
#include <Modloader/app/structs/FileNotFoundException__Class.h>
#endif
#undef IL2CPP_STRUCT_FileNotFoundException_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileNotFoundException_DEFINED) && !defined(IL2CPP_STRUCT_FileNotFoundException_FWDDECL)
#include <Modloader/app/structs/FileNotFoundException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileNotFoundException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
