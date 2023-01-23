#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderDrivenComponent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderDrivenComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderDrivenComponent_DEFINED)
#include <Modloader/app/structs/UberShaderDrivenComponent__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderDrivenComponent__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderDrivenComponent_DEFINED
struct UberShaderDrivenComponent__Class;
struct UberShaderDrivenComponent {
    struct UberShaderDrivenComponent__Class* klass;
    MonitorData* monitor;
    struct UberShaderDrivenComponent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderDrivenComponent_FWDDECL)
#define IL2CPP_STRUCT_UberShaderDrivenComponent_FWDDECL
#include <Modloader/app/structs/UberShaderDrivenComponent__Class.h>
#endif
#undef IL2CPP_STRUCT_UberShaderDrivenComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderDrivenComponent_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderDrivenComponent_FWDDECL)
#include <Modloader/app/structs/UberShaderDrivenComponent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderDrivenComponent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
