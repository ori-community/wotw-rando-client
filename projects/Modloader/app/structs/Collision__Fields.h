#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Collision__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Collision__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Collision__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_Collision__Fields_DEFINED
struct Rigidbody;
struct Collider;
struct ContactPoint__Array;
struct __declspec(align(8)) Collision__Fields {
    struct Vector3 m_Impulse;
    struct Vector3 m_RelativeVelocity;
    struct Rigidbody* m_Rigidbody;
    struct Collider* m_Collider;
    int32_t m_ContactCount;
    struct ContactPoint__Array* m_RecycledContacts;
    struct ContactPoint__Array* m_LegacyContacts;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Collision__Fields_FWDDECL)
#define IL2CPP_STRUCT_Collision__Fields_FWDDECL
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/ContactPoint__Array.h>
#include <Modloader/app/structs/Rigidbody.h>
#endif
#undef IL2CPP_STRUCT_Collision__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Collision__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Collision__Fields_FWDDECL)
#include <Modloader/app/structs/Collision__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Collision__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
