#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimator_TransformData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimator_TransformData_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_TransformData_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_MoonAnimator_TransformData_DEFINED
struct Transform;
struct String;
struct MoonAnimator_TransformData {
    bool IsJoint;
    struct Transform* Transform;
    struct Vector3 Postion;
    struct Quaternion Rotation;
    struct Vector3 Scale;
    struct String* DebugName;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimator_TransformData_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimator_TransformData_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimator_TransformData_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_TransformData_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimator_TransformData_FWDDECL)
#include <Modloader/app/structs/MoonAnimator_TransformData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimator_TransformData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
