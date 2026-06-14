#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKConstraintBend__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKConstraintBend__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKConstraintBend__Fields_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_IKConstraintBend__Fields_DEFINED
struct Transform;
struct __declspec(align(8)) IKConstraintBend__Fields {
    struct Transform* bone1;
    struct Transform* bone2;
    struct Transform* bone3;
    struct Transform* bendGoal;
    struct Vector3 direction;
    struct Quaternion rotationOffset;
    float weight;
    struct Vector3 defaultLocalDirection;
    struct Vector3 defaultChildDirection;
    float clampF;
    int32_t chainIndex1;
    int32_t nodeIndex1;
    int32_t chainIndex2;
    int32_t nodeIndex2;
    int32_t chainIndex3;
    int32_t nodeIndex3;
    bool _initiated_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKConstraintBend__Fields_FWDDECL)
#define IL2CPP_STRUCT_IKConstraintBend__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_IKConstraintBend__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKConstraintBend__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IKConstraintBend__Fields_FWDDECL)
#include <Modloader/app/structs/IKConstraintBend__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKConstraintBend__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
