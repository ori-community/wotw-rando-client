#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileLoadException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileLoadException_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileLoadException_DEFINED)
#include <Modloader/app/structs/FileLoadException__Fields.h>
#if defined(IL2CPP_STRUCT_FileLoadException__Fields_DEFINED)
#define IL2CPP_STRUCT_FileLoadException_DEFINED
struct FileLoadException__Class;
struct FileLoadException {
    struct FileLoadException__Class* klass;
    MonitorData* monitor;
    struct FileLoadException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FileLoadException_FWDDECL)
#define IL2CPP_STRUCT_FileLoadException_FWDDECL
#include <Modloader/app/structs/FileLoadException__Class.h>
#endif
#undef IL2CPP_STRUCT_FileLoadException_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileLoadException_DEFINED) && !defined(IL2CPP_STRUCT_FileLoadException_FWDDECL)
#include <Modloader/app/structs/FileLoadException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileLoadException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
