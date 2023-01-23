#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IResourceReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IResourceReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_IResourceReader_DEFINED)
#define IL2CPP_STRUCT_IResourceReader_DEFINED
struct IResourceReader__Class;
struct IResourceReader {
    struct IResourceReader__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IResourceReader_FWDDECL)
#define IL2CPP_STRUCT_IResourceReader_FWDDECL
#include <Modloader/app/structs/IResourceReader__Class.h>
#endif
#undef IL2CPP_STRUCT_IResourceReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_IResourceReader_DEFINED) && !defined(IL2CPP_STRUCT_IResourceReader_FWDDECL)
#include <Modloader/app/structs/IResourceReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IResourceReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
