#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CreateSceneTool_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CreateSceneTool_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateSceneTool_DEFINED)
#include <Modloader/app/structs/CreateSceneTool__Fields.h>
#if defined(IL2CPP_STRUCT_CreateSceneTool__Fields_DEFINED)
#define IL2CPP_STRUCT_CreateSceneTool_DEFINED
struct CreateSceneTool__Class;
struct CreateSceneTool {
    struct CreateSceneTool__Class* klass;
    MonitorData* monitor;
    struct CreateSceneTool__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CreateSceneTool_FWDDECL)
#define IL2CPP_STRUCT_CreateSceneTool_FWDDECL
#include <Modloader/app/structs/CreateSceneTool__Class.h>
#endif
#undef IL2CPP_STRUCT_CreateSceneTool_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateSceneTool_DEFINED) && !defined(IL2CPP_STRUCT_CreateSceneTool_FWDDECL)
#include <Modloader/app/structs/CreateSceneTool.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CreateSceneTool.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
