#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKLimbTargeted__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKLimbTargeted__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKLimbTargeted__Fields_DEFINED)
#include <Modloader/app/structs/IKLimb__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_IKLimb__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_IKLimbTargeted__Fields_DEFINED
struct Transform;
struct IKLimbTargeted__Fields {
    struct IKLimb__Fields _;
    struct Transform* targetTransform;
    struct Vector3 targetPosition;
    bool targetMouse;
    bool animateUsingReference;
    struct Vector3 targetReferenceLocalPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKLimbTargeted__Fields_FWDDECL)
#define IL2CPP_STRUCT_IKLimbTargeted__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_IKLimbTargeted__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKLimbTargeted__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IKLimbTargeted__Fields_FWDDECL)
#include <Modloader/app/structs/IKLimbTargeted__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKLimbTargeted__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
