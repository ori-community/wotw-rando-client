#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContactPoint2D_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContactPoint2D_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContactPoint2D_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_ContactPoint2D_DEFINED
struct ContactPoint2D {
    struct Vector2 m_Point;
    struct Vector2 m_Normal;
    struct Vector2 m_RelativeVelocity;
    float m_Separation;
    float m_NormalImpulse;
    float m_TangentImpulse;
    int32_t m_Collider;
    int32_t m_OtherCollider;
    int32_t m_Rigidbody;
    int32_t m_OtherRigidbody;
    int32_t m_Enabled;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContactPoint2D_FWDDECL)
#define IL2CPP_STRUCT_ContactPoint2D_FWDDECL
#endif
#undef IL2CPP_STRUCT_ContactPoint2D_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContactPoint2D_DEFINED) && !defined(IL2CPP_STRUCT_ContactPoint2D_FWDDECL)
#include <Modloader/app/structs/ContactPoint2D.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContactPoint2D.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
