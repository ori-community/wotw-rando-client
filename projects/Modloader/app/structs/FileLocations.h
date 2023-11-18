#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileLocations_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileLocations_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileLocations_DEFINED)
#define IL2CPP_STRUCT_FileLocations_DEFINED
struct FileLocations__Class;
struct FileLocations {
    struct FileLocations__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_FileLocations_FWDDECL)
#define IL2CPP_STRUCT_FileLocations_FWDDECL
#include <Modloader/app/structs/FileLocations__Class.h>
#endif
#undef IL2CPP_STRUCT_FileLocations_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileLocations_DEFINED) && !defined(IL2CPP_STRUCT_FileLocations_FWDDECL)
#include <Modloader/app/structs/FileLocations.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileLocations.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
