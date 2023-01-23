#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaycastHit_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaycastHit_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaycastHit_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_RaycastHit_DEFINED
struct RaycastHit {
    struct Vector3 m_Point;
    struct Vector3 m_Normal;
    uint32_t m_FaceID;
    float m_Distance;
    struct Vector2 m_UV;
    int32_t m_Collider;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaycastHit_FWDDECL)
#define IL2CPP_STRUCT_RaycastHit_FWDDECL
#endif
#undef IL2CPP_STRUCT_RaycastHit_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaycastHit_DEFINED) && !defined(IL2CPP_STRUCT_RaycastHit_FWDDECL)
#include <Modloader/app/structs/RaycastHit.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaycastHit.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
