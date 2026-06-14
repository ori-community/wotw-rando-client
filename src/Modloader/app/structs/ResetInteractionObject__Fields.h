#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResetInteractionObject__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResetInteractionObject__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResetInteractionObject__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_ResetInteractionObject__Fields_DEFINED
struct Transform;
struct Rigidbody;
struct ResetInteractionObject__Fields {
    struct MonoBehaviour__Fields _;
    float resetDelay;
    struct Vector3 defaultPosition;
    struct Quaternion defaultRotation;
    struct Transform* defaultParent;
    struct Rigidbody* r;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ResetInteractionObject__Fields_FWDDECL)
#define IL2CPP_STRUCT_ResetInteractionObject__Fields_FWDDECL
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_ResetInteractionObject__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResetInteractionObject__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ResetInteractionObject__Fields_FWDDECL)
#include <Modloader/app/structs/ResetInteractionObject__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResetInteractionObject__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
