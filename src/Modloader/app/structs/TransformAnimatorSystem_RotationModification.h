#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransformAnimatorSystem_RotationModification_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransformAnimatorSystem_RotationModification_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformAnimatorSystem_RotationModification_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Space__Enum.h>
#if defined(IL2CPP_STRUCT_Quaternion_DEFINED) && defined(IL2CPP_STRUCT_Space__Enum_DEFINED)
#define IL2CPP_STRUCT_TransformAnimatorSystem_RotationModification_DEFINED
struct TransformAnimatorSystem_RotationModification {
    struct Quaternion Value;
    Space__Enum Space;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransformAnimatorSystem_RotationModification_FWDDECL)
#define IL2CPP_STRUCT_TransformAnimatorSystem_RotationModification_FWDDECL
#endif
#undef IL2CPP_STRUCT_TransformAnimatorSystem_RotationModification_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformAnimatorSystem_RotationModification_DEFINED) && !defined(IL2CPP_STRUCT_TransformAnimatorSystem_RotationModification_FWDDECL)
#include <Modloader/app/structs/TransformAnimatorSystem_RotationModification.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransformAnimatorSystem_RotationModification.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
