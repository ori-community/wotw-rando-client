#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LODParameters_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LODParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_LODParameters_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_LODParameters_DEFINED
struct LODParameters {
    int32_t m_IsOrthographic;
    struct Vector3 m_CameraPosition;
    float m_FieldOfView;
    float m_OrthoSize;
    int32_t m_CameraPixelHeight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LODParameters_FWDDECL)
#define IL2CPP_STRUCT_LODParameters_FWDDECL
#endif
#undef IL2CPP_STRUCT_LODParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_LODParameters_DEFINED) && !defined(IL2CPP_STRUCT_LODParameters_FWDDECL)
#include <Modloader/app/structs/LODParameters.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LODParameters.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
