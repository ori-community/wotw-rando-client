#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderComponent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderComponent_DEFINED)
#include <Modloader/app/structs/UberShaderComponent__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderComponent__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderComponent_DEFINED
struct UberShaderComponent__Class;
struct UberShaderComponent {
    struct UberShaderComponent__Class* klass;
    MonitorData* monitor;
    struct UberShaderComponent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderComponent_FWDDECL)
#define IL2CPP_STRUCT_UberShaderComponent_FWDDECL
#include <Modloader/app/structs/UberShaderComponent__Class.h>
#endif
#undef IL2CPP_STRUCT_UberShaderComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderComponent_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderComponent_FWDDECL)
#include <Modloader/app/structs/UberShaderComponent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderComponent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
