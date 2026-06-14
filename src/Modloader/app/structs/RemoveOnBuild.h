#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemoveOnBuild_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemoveOnBuild_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoveOnBuild_DEFINED)
#include <Modloader/app/structs/RemoveOnBuild__Fields.h>
#if defined(IL2CPP_STRUCT_RemoveOnBuild__Fields_DEFINED)
#define IL2CPP_STRUCT_RemoveOnBuild_DEFINED
struct RemoveOnBuild__Class;
struct RemoveOnBuild {
    struct RemoveOnBuild__Class* klass;
    MonitorData* monitor;
    struct RemoveOnBuild__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemoveOnBuild_FWDDECL)
#define IL2CPP_STRUCT_RemoveOnBuild_FWDDECL
#include <Modloader/app/structs/RemoveOnBuild__Class.h>
#endif
#undef IL2CPP_STRUCT_RemoveOnBuild_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoveOnBuild_DEFINED) && !defined(IL2CPP_STRUCT_RemoveOnBuild_FWDDECL)
#include <Modloader/app/structs/RemoveOnBuild.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemoveOnBuild.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
