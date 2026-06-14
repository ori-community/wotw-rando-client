#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightCanvas__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightCanvas__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCanvas__StaticFields_DEFINED)
#define IL2CPP_STRUCT_LightCanvas__StaticFields_DEFINED
struct Mesh;
struct Material;
struct LightCanvas__StaticFields {
    struct Mesh* CanvasMesh;
    struct Material* CanvasHandlesMaterial;
    bool DoTimelineslicedSetPos;
};
#endif
#if !defined(IL2CPP_STRUCT_LightCanvas__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_LightCanvas__StaticFields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Mesh.h>
#endif
#undef IL2CPP_STRUCT_LightCanvas__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCanvas__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_LightCanvas__StaticFields_FWDDECL)
#include <Modloader/app/structs/LightCanvas__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightCanvas__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
