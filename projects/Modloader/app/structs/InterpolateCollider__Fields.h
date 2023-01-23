#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InterpolateCollider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InterpolateCollider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterpolateCollider__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_InterpolateCollider__Fields_DEFINED
struct Transform__Array;
struct Collider;
struct InterpolateCollider__Fields {
    struct MonoBehaviour__Fields _;
    struct Vector3 m_lastPosition;
    struct Quaternion m_lastRotation;
    int32_t Steps;
    struct Transform__Array* m_child;
    struct Collider* m_collider;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InterpolateCollider__Fields_FWDDECL)
#define IL2CPP_STRUCT_InterpolateCollider__Fields_FWDDECL
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Transform__Array.h>
#endif
#undef IL2CPP_STRUCT_InterpolateCollider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterpolateCollider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InterpolateCollider__Fields_FWDDECL)
#include <Modloader/app/structs/InterpolateCollider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InterpolateCollider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
