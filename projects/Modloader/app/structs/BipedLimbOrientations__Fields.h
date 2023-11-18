#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BipedLimbOrientations__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BipedLimbOrientations__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BipedLimbOrientations__Fields_DEFINED)
#define IL2CPP_STRUCT_BipedLimbOrientations__Fields_DEFINED
struct BipedLimbOrientations_LimbOrientation;
struct __declspec(align(8)) BipedLimbOrientations__Fields {
    struct BipedLimbOrientations_LimbOrientation* leftArm;
    struct BipedLimbOrientations_LimbOrientation* rightArm;
    struct BipedLimbOrientations_LimbOrientation* leftLeg;
    struct BipedLimbOrientations_LimbOrientation* rightLeg;
};
#endif
#if !defined(IL2CPP_STRUCT_BipedLimbOrientations__Fields_FWDDECL)
#define IL2CPP_STRUCT_BipedLimbOrientations__Fields_FWDDECL
#include <Modloader/app/structs/BipedLimbOrientations_LimbOrientation.h>
#endif
#undef IL2CPP_STRUCT_BipedLimbOrientations__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BipedLimbOrientations__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BipedLimbOrientations__Fields_FWDDECL)
#include <Modloader/app/structs/BipedLimbOrientations__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BipedLimbOrientations__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
