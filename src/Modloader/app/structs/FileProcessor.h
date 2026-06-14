#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileProcessor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileProcessor_DEFINED)
#define IL2CPP_STRUCT_FileProcessor_DEFINED
struct FileProcessor__Class;
struct FileProcessor {
    struct FileProcessor__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_FileProcessor_FWDDECL)
#define IL2CPP_STRUCT_FileProcessor_FWDDECL
#include <Modloader/app/structs/FileProcessor__Class.h>
#endif
#undef IL2CPP_STRUCT_FileProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileProcessor_DEFINED) && !defined(IL2CPP_STRUCT_FileProcessor_FWDDECL)
#include <Modloader/app/structs/FileProcessor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileProcessor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
