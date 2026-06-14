#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StencilMaterial_MatEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StencilMaterial_MatEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_StencilMaterial_MatEntry_DEFINED)
#include <Modloader/app/structs/StencilMaterial_MatEntry__Fields.h>
#if defined(IL2CPP_STRUCT_StencilMaterial_MatEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_StencilMaterial_MatEntry_DEFINED
struct StencilMaterial_MatEntry__Class;
struct StencilMaterial_MatEntry {
    struct StencilMaterial_MatEntry__Class* klass;
    MonitorData* monitor;
    struct StencilMaterial_MatEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StencilMaterial_MatEntry_FWDDECL)
#define IL2CPP_STRUCT_StencilMaterial_MatEntry_FWDDECL
#include <Modloader/app/structs/StencilMaterial_MatEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_StencilMaterial_MatEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_StencilMaterial_MatEntry_DEFINED) && !defined(IL2CPP_STRUCT_StencilMaterial_MatEntry_FWDDECL)
#include <Modloader/app/structs/StencilMaterial_MatEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StencilMaterial_MatEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
