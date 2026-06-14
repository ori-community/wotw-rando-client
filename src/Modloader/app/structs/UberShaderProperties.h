#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderProperties_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderProperties_DEFINED)
#define IL2CPP_STRUCT_UberShaderProperties_DEFINED
struct UberShaderProperties__Class;
struct UberShaderProperties {
    struct UberShaderProperties__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UberShaderProperties_FWDDECL)
#define IL2CPP_STRUCT_UberShaderProperties_FWDDECL
#include <Modloader/app/structs/UberShaderProperties__Class.h>
#endif
#undef IL2CPP_STRUCT_UberShaderProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderProperties_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderProperties_FWDDECL)
#include <Modloader/app/structs/UberShaderProperties.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderProperties.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
