#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Amplifier_Body__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Amplifier_Body__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Amplifier_Body__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_Amplifier_Body__Fields_DEFINED
struct Transform;
struct Amplifier_Body_EffectorLink__Array;
struct __declspec(align(8)) Amplifier_Body__Fields {
    struct Transform* transform;
    struct Transform* relativeTo;
    struct Amplifier_Body_EffectorLink__Array* effectorLinks;
    float verticalWeight;
    float horizontalWeight;
    float speed;
    struct Vector3 lastRelativePos;
    struct Vector3 smoothDelta;
    bool firstUpdate;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Amplifier_Body__Fields_FWDDECL)
#define IL2CPP_STRUCT_Amplifier_Body__Fields_FWDDECL
#include <Modloader/app/structs/Amplifier_Body_EffectorLink__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_Amplifier_Body__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Amplifier_Body__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Amplifier_Body__Fields_FWDDECL)
#include <Modloader/app/structs/Amplifier_Body__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Amplifier_Body__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
