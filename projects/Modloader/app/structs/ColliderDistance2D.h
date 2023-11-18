#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColliderDistance2D_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColliderDistance2D_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColliderDistance2D_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_ColliderDistance2D_DEFINED
struct ColliderDistance2D {
    struct Vector2 m_PointA;
    struct Vector2 m_PointB;
    struct Vector2 m_Normal;
    float m_Distance;
    int32_t m_IsValid;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColliderDistance2D_FWDDECL)
#define IL2CPP_STRUCT_ColliderDistance2D_FWDDECL
#endif
#undef IL2CPP_STRUCT_ColliderDistance2D_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColliderDistance2D_DEFINED) && !defined(IL2CPP_STRUCT_ColliderDistance2D_FWDDECL)
#include <Modloader/app/structs/ColliderDistance2D.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColliderDistance2D.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
