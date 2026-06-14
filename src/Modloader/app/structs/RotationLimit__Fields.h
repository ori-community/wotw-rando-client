#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RotationLimit__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RotationLimit__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RotationLimit__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_RotationLimit__Fields_DEFINED
struct RotationLimit__Fields {
    struct MonoBehaviour__Fields _;
    struct Vector3 axis;
    bool fixedDefaultLocalRotation;
    struct Quaternion defaultLocalRotation;
    bool initiated;
    bool applicationQuit;
    struct Quaternion inverseDefaultLocalRotation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RotationLimit__Fields_FWDDECL)
#define IL2CPP_STRUCT_RotationLimit__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_RotationLimit__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RotationLimit__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RotationLimit__Fields_FWDDECL)
#include <Modloader/app/structs/RotationLimit__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RotationLimit__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
