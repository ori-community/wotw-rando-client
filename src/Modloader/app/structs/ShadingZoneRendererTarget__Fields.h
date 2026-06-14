#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShadingZoneRendererTarget__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShadingZoneRendererTarget__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShadingZoneRendererTarget__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_ShadingZoneRendererTarget__Fields_DEFINED
struct Renderer;
struct Transform;
struct __declspec(align(8)) ShadingZoneRendererTarget__Fields {
    struct Renderer* m_renderer;
    struct Vector3 m_localCenter;
    struct Transform* m_targetTransform;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShadingZoneRendererTarget__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShadingZoneRendererTarget__Fields_FWDDECL
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_ShadingZoneRendererTarget__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShadingZoneRendererTarget__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShadingZoneRendererTarget__Fields_FWDDECL)
#include <Modloader/app/structs/ShadingZoneRendererTarget__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShadingZoneRendererTarget__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
