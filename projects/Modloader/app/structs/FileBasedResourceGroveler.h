#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileBasedResourceGroveler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileBasedResourceGroveler_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileBasedResourceGroveler_DEFINED)
#include <Modloader/app/structs/FileBasedResourceGroveler__Fields.h>
#if defined(IL2CPP_STRUCT_FileBasedResourceGroveler__Fields_DEFINED)
#define IL2CPP_STRUCT_FileBasedResourceGroveler_DEFINED
struct FileBasedResourceGroveler__Class;
struct FileBasedResourceGroveler {
    struct FileBasedResourceGroveler__Class* klass;
    MonitorData* monitor;
    struct FileBasedResourceGroveler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FileBasedResourceGroveler_FWDDECL)
#define IL2CPP_STRUCT_FileBasedResourceGroveler_FWDDECL
#include <Modloader/app/structs/FileBasedResourceGroveler__Class.h>
#endif
#undef IL2CPP_STRUCT_FileBasedResourceGroveler_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileBasedResourceGroveler_DEFINED) && !defined(IL2CPP_STRUCT_FileBasedResourceGroveler_FWDDECL)
#include <Modloader/app/structs/FileBasedResourceGroveler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileBasedResourceGroveler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
