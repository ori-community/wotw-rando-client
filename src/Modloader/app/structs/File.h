#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_File_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_File_INITIALIZING
#if !defined(IL2CPP_STRUCT_File_DEFINED)
#define IL2CPP_STRUCT_File_DEFINED
struct File__Class;
struct File {
    struct File__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_File_FWDDECL)
#define IL2CPP_STRUCT_File_FWDDECL
#include <Modloader/app/structs/File__Class.h>
#endif
#undef IL2CPP_STRUCT_File_INITIALIZING
#if !defined(IL2CPP_STRUCT_File_DEFINED) && !defined(IL2CPP_STRUCT_File_FWDDECL)
#include <Modloader/app/structs/File.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/File.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
