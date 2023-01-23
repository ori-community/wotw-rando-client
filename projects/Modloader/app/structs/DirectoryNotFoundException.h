#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DirectoryNotFoundException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DirectoryNotFoundException_INITIALIZING
#if !defined(IL2CPP_STRUCT_DirectoryNotFoundException_DEFINED)
#include <Modloader/app/structs/DirectoryNotFoundException__Fields.h>
#if defined(IL2CPP_STRUCT_DirectoryNotFoundException__Fields_DEFINED)
#define IL2CPP_STRUCT_DirectoryNotFoundException_DEFINED
struct DirectoryNotFoundException__Class;
struct DirectoryNotFoundException {
    struct DirectoryNotFoundException__Class* klass;
    MonitorData* monitor;
    struct DirectoryNotFoundException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DirectoryNotFoundException_FWDDECL)
#define IL2CPP_STRUCT_DirectoryNotFoundException_FWDDECL
#include <Modloader/app/structs/DirectoryNotFoundException__Class.h>
#endif
#undef IL2CPP_STRUCT_DirectoryNotFoundException_INITIALIZING
#if !defined(IL2CPP_STRUCT_DirectoryNotFoundException_DEFINED) && !defined(IL2CPP_STRUCT_DirectoryNotFoundException_FWDDECL)
#include <Modloader/app/structs/DirectoryNotFoundException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DirectoryNotFoundException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
