#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CapsuleShapeCopier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CapsuleShapeCopier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CapsuleShapeCopier__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_CapsuleShapeCopier__Fields_DEFINED
struct CapsuleCollider;
struct CapsuleShapeCopier__Fields {
    struct MonoBehaviour__Fields _;
    struct CapsuleCollider* CapsuleTarget;
    float ShrinkDistance;
    float m_oldRadius;
    float m_oldHeight;
    float m_oldShrinkDistance;
    struct Vector3 m_oldCenter;
    struct CapsuleCollider* m_capsuleCollider;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CapsuleShapeCopier__Fields_FWDDECL)
#define IL2CPP_STRUCT_CapsuleShapeCopier__Fields_FWDDECL
#include <Modloader/app/structs/CapsuleCollider.h>
#endif
#undef IL2CPP_STRUCT_CapsuleShapeCopier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CapsuleShapeCopier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CapsuleShapeCopier__Fields_FWDDECL)
#include <Modloader/app/structs/CapsuleShapeCopier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CapsuleShapeCopier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
