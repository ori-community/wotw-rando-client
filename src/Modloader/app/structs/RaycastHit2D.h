#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaycastHit2D_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaycastHit2D_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaycastHit2D_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_RaycastHit2D_DEFINED
struct RaycastHit2D {
    struct Vector2 m_Centroid;
    struct Vector2 m_Point;
    struct Vector2 m_Normal;
    float m_Distance;
    float m_Fraction;
    int32_t m_Collider;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaycastHit2D_FWDDECL)
#define IL2CPP_STRUCT_RaycastHit2D_FWDDECL
#endif
#undef IL2CPP_STRUCT_RaycastHit2D_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaycastHit2D_DEFINED) && !defined(IL2CPP_STRUCT_RaycastHit2D_FWDDECL)
#include <Modloader/app/structs/RaycastHit2D.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaycastHit2D.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
