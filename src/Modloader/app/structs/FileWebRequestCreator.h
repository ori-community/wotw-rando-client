#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileWebRequestCreator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileWebRequestCreator_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileWebRequestCreator_DEFINED)
#define IL2CPP_STRUCT_FileWebRequestCreator_DEFINED
struct FileWebRequestCreator__Class;
struct FileWebRequestCreator {
    struct FileWebRequestCreator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_FileWebRequestCreator_FWDDECL)
#define IL2CPP_STRUCT_FileWebRequestCreator_FWDDECL
#include <Modloader/app/structs/FileWebRequestCreator__Class.h>
#endif
#undef IL2CPP_STRUCT_FileWebRequestCreator_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileWebRequestCreator_DEFINED) && !defined(IL2CPP_STRUCT_FileWebRequestCreator_FWDDECL)
#include <Modloader/app/structs/FileWebRequestCreator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileWebRequestCreator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
