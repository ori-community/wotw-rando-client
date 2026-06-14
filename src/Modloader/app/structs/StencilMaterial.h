#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StencilMaterial_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StencilMaterial_INITIALIZING
#if !defined(IL2CPP_STRUCT_StencilMaterial_DEFINED)
#define IL2CPP_STRUCT_StencilMaterial_DEFINED
struct StencilMaterial__Class;
struct StencilMaterial {
    struct StencilMaterial__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_StencilMaterial_FWDDECL)
#define IL2CPP_STRUCT_StencilMaterial_FWDDECL
#include <Modloader/app/structs/StencilMaterial__Class.h>
#endif
#undef IL2CPP_STRUCT_StencilMaterial_INITIALIZING
#if !defined(IL2CPP_STRUCT_StencilMaterial_DEFINED) && !defined(IL2CPP_STRUCT_StencilMaterial_FWDDECL)
#include <Modloader/app/structs/StencilMaterial.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StencilMaterial.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
