#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VisibleReflectionProbe_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VisibleReflectionProbe_INITIALIZING
#if !defined(IL2CPP_STRUCT_VisibleReflectionProbe_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_Bounds_DEFINED) && defined(IL2CPP_STRUCT_Matrix4x4_DEFINED) && defined(IL2CPP_STRUCT_Vector4_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_VisibleReflectionProbe_DEFINED
struct VisibleReflectionProbe {
    struct Bounds bounds;
    struct Matrix4x4 localToWorld;
    struct Vector4 hdr;
    struct Vector3 center;
    float blendDistance;
    int32_t importance;
    int32_t boxProjection;
    int32_t instanceId;
    int32_t textureId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VisibleReflectionProbe_FWDDECL)
#define IL2CPP_STRUCT_VisibleReflectionProbe_FWDDECL
#endif
#undef IL2CPP_STRUCT_VisibleReflectionProbe_INITIALIZING
#if !defined(IL2CPP_STRUCT_VisibleReflectionProbe_DEFINED) && !defined(IL2CPP_STRUCT_VisibleReflectionProbe_FWDDECL)
#include <Modloader/app/structs/VisibleReflectionProbe.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VisibleReflectionProbe.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
