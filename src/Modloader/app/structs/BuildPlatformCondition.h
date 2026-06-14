#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BuildPlatformCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BuildPlatformCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuildPlatformCondition_DEFINED)
#include <Modloader/app/structs/BuildPlatformCondition__Fields.h>
#if defined(IL2CPP_STRUCT_BuildPlatformCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_BuildPlatformCondition_DEFINED
struct BuildPlatformCondition__Class;
struct BuildPlatformCondition {
    struct BuildPlatformCondition__Class* klass;
    MonitorData* monitor;
    struct BuildPlatformCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BuildPlatformCondition_FWDDECL)
#define IL2CPP_STRUCT_BuildPlatformCondition_FWDDECL
#include <Modloader/app/structs/BuildPlatformCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_BuildPlatformCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuildPlatformCondition_DEFINED) && !defined(IL2CPP_STRUCT_BuildPlatformCondition_FWDDECL)
#include <Modloader/app/structs/BuildPlatformCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BuildPlatformCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
