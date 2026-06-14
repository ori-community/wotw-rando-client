#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterAnimationBase__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterAnimationBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterAnimationBase__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_CharacterAnimationBase__Fields_DEFINED
struct CharacterAnimationBase__Fields {
    struct MonoBehaviour__Fields _;
    bool smoothFollow;
    float smoothFollowSpeed;
    struct Vector3 lastPosition;
    struct Vector3 localPosition;
    struct Quaternion localRotation;
    struct Quaternion lastRotation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterAnimationBase__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterAnimationBase__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_CharacterAnimationBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterAnimationBase__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterAnimationBase__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterAnimationBase__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterAnimationBase__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
