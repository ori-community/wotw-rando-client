#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Collision2D__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Collision2D__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Collision2D__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_Collision2D__Fields_DEFINED
struct ContactPoint2D__Array;
struct __declspec(align(8)) Collision2D__Fields {
    int32_t m_Collider;
    int32_t m_OtherCollider;
    int32_t m_Rigidbody;
    int32_t m_OtherRigidbody;
    struct Vector2 m_RelativeVelocity;
    int32_t m_Enabled;
    int32_t m_ContactCount;
    struct ContactPoint2D__Array* m_RecycledContacts;
    struct ContactPoint2D__Array* m_LegacyContacts;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Collision2D__Fields_FWDDECL)
#define IL2CPP_STRUCT_Collision2D__Fields_FWDDECL
#include <Modloader/app/structs/ContactPoint2D__Array.h>
#endif
#undef IL2CPP_STRUCT_Collision2D__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Collision2D__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Collision2D__Fields_FWDDECL)
#include <Modloader/app/structs/Collision2D__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Collision2D__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
