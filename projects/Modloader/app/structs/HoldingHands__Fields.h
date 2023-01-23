#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HoldingHands__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HoldingHands__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HoldingHands__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_HoldingHands__Fields_DEFINED
struct FullBodyBipedIK;
struct Transform;
struct HoldingHands__Fields {
    struct MonoBehaviour__Fields _;
    struct FullBodyBipedIK* rightHandChar;
    struct FullBodyBipedIK* leftHandChar;
    struct Transform* rightHandTarget;
    struct Transform* leftHandTarget;
    float crossFade;
    float speed;
    struct Quaternion rightHandRotation;
    struct Quaternion leftHandRotation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HoldingHands__Fields_FWDDECL)
#define IL2CPP_STRUCT_HoldingHands__Fields_FWDDECL
#include <Modloader/app/structs/FullBodyBipedIK.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_HoldingHands__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HoldingHands__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HoldingHands__Fields_FWDDECL)
#include <Modloader/app/structs/HoldingHands__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HoldingHands__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
