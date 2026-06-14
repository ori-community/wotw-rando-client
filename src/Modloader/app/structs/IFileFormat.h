#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IFileFormat_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IFileFormat_INITIALIZING
#if !defined(IL2CPP_STRUCT_IFileFormat_DEFINED)
#define IL2CPP_STRUCT_IFileFormat_DEFINED
struct IFileFormat__Class;
struct IFileFormat {
    struct IFileFormat__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IFileFormat_FWDDECL)
#define IL2CPP_STRUCT_IFileFormat_FWDDECL
#include <Modloader/app/structs/IFileFormat__Class.h>
#endif
#undef IL2CPP_STRUCT_IFileFormat_INITIALIZING
#if !defined(IL2CPP_STRUCT_IFileFormat_DEFINED) && !defined(IL2CPP_STRUCT_IFileFormat_FWDDECL)
#include <Modloader/app/structs/IFileFormat.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IFileFormat.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
