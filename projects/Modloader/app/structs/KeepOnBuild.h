#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeepOnBuild_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeepOnBuild_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeepOnBuild_DEFINED)
#include <Modloader/app/structs/KeepOnBuild__Fields.h>
#if defined(IL2CPP_STRUCT_KeepOnBuild__Fields_DEFINED)
#define IL2CPP_STRUCT_KeepOnBuild_DEFINED
struct KeepOnBuild__Class;
struct KeepOnBuild {
    struct KeepOnBuild__Class* klass;
    MonitorData* monitor;
    struct KeepOnBuild__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KeepOnBuild_FWDDECL)
#define IL2CPP_STRUCT_KeepOnBuild_FWDDECL
#include <Modloader/app/structs/KeepOnBuild__Class.h>
#endif
#undef IL2CPP_STRUCT_KeepOnBuild_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeepOnBuild_DEFINED) && !defined(IL2CPP_STRUCT_KeepOnBuild_FWDDECL)
#include <Modloader/app/structs/KeepOnBuild.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeepOnBuild.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
