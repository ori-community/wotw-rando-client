#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderBuildUpdate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderBuildUpdate_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderBuildUpdate_DEFINED)
#include <Modloader/app/structs/UberShaderBuildUpdate__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderBuildUpdate__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderBuildUpdate_DEFINED
struct UberShaderBuildUpdate__Class;
struct UberShaderBuildUpdate {
    struct UberShaderBuildUpdate__Class* klass;
    MonitorData* monitor;
    struct UberShaderBuildUpdate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderBuildUpdate_FWDDECL)
#define IL2CPP_STRUCT_UberShaderBuildUpdate_FWDDECL
#include <Modloader/app/structs/UberShaderBuildUpdate__Class.h>
#endif
#undef IL2CPP_STRUCT_UberShaderBuildUpdate_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderBuildUpdate_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderBuildUpdate_FWDDECL)
#include <Modloader/app/structs/UberShaderBuildUpdate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderBuildUpdate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
