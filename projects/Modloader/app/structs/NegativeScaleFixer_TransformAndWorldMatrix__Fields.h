#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NegativeScaleFixer_TransformAndWorldMatrix__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NegativeScaleFixer_TransformAndWorldMatrix__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NegativeScaleFixer_TransformAndWorldMatrix__Fields_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_NegativeScaleFixer_TransformAndWorldMatrix__Fields_DEFINED
struct Transform;
struct __declspec(align(8)) NegativeScaleFixer_TransformAndWorldMatrix__Fields {
    struct Transform* _Transform_k__BackingField;
    struct Vector3 worldPos;
    struct Quaternion worldRot;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NegativeScaleFixer_TransformAndWorldMatrix__Fields_FWDDECL)
#define IL2CPP_STRUCT_NegativeScaleFixer_TransformAndWorldMatrix__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_NegativeScaleFixer_TransformAndWorldMatrix__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NegativeScaleFixer_TransformAndWorldMatrix__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NegativeScaleFixer_TransformAndWorldMatrix__Fields_FWDDECL)
#include <Modloader/app/structs/NegativeScaleFixer_TransformAndWorldMatrix__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NegativeScaleFixer_TransformAndWorldMatrix__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
