#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderCustomMesh_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderCustomMesh_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderCustomMesh_DEFINED)
#include <Modloader/app/structs/UberShaderCustomMesh__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderCustomMesh__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderCustomMesh_DEFINED
struct UberShaderCustomMesh__Class;
struct UberShaderCustomMesh {
    struct UberShaderCustomMesh__Class* klass;
    MonitorData* monitor;
    struct UberShaderCustomMesh__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderCustomMesh_FWDDECL)
#define IL2CPP_STRUCT_UberShaderCustomMesh_FWDDECL
#include <Modloader/app/structs/UberShaderCustomMesh__Class.h>
#endif
#undef IL2CPP_STRUCT_UberShaderCustomMesh_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderCustomMesh_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderCustomMesh_FWDDECL)
#include <Modloader/app/structs/UberShaderCustomMesh.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderCustomMesh.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
