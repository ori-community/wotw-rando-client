#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderWorldHierarchy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderWorldHierarchy_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderWorldHierarchy_DEFINED)
#include <Modloader/app/structs/UberShaderWorldHierarchy__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderWorldHierarchy__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderWorldHierarchy_DEFINED
struct UberShaderWorldHierarchy__Class;
struct UberShaderWorldHierarchy {
    struct UberShaderWorldHierarchy__Class* klass;
    MonitorData* monitor;
    struct UberShaderWorldHierarchy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderWorldHierarchy_FWDDECL)
#define IL2CPP_STRUCT_UberShaderWorldHierarchy_FWDDECL
#include <Modloader/app/structs/UberShaderWorldHierarchy__Class.h>
#endif
#undef IL2CPP_STRUCT_UberShaderWorldHierarchy_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderWorldHierarchy_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderWorldHierarchy_FWDDECL)
#include <Modloader/app/structs/UberShaderWorldHierarchy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderWorldHierarchy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
