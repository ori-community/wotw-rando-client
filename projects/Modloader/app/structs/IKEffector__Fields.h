#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKEffector__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKEffector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKEffector__Fields_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_IKEffector__Fields_DEFINED
struct Transform;
struct Transform__Array;
struct Vector3__Array;
struct Int32__Array;
struct __declspec(align(8)) IKEffector__Fields {
    struct Transform* bone;
    struct Transform* target;
    float positionWeight;
    float rotationWeight;
    struct Vector3 position;
    struct Quaternion rotation;
    struct Vector3 positionOffset;
    bool _isEndEffector_k__BackingField;
    bool effectChildNodes;
    float maintainRelativePositionWeight;
    struct Transform__Array* childBones;
    struct Transform* planeBone1;
    struct Transform* planeBone2;
    struct Transform* planeBone3;
    struct Quaternion planeRotationOffset;
    float posW;
    float rotW;
    struct Vector3__Array* localPositions;
    bool usePlaneNodes;
    struct Quaternion animatedPlaneRotation;
    struct Vector3 animatedPosition;
    bool firstUpdate;
    int32_t chainIndex;
    int32_t nodeIndex;
    int32_t plane1ChainIndex;
    int32_t plane1NodeIndex;
    int32_t plane2ChainIndex;
    int32_t plane2NodeIndex;
    int32_t plane3ChainIndex;
    int32_t plane3NodeIndex;
    struct Int32__Array* childChainIndexes;
    struct Int32__Array* childNodeIndexes;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKEffector__Fields_FWDDECL)
#define IL2CPP_STRUCT_IKEffector__Fields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Transform__Array.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_IKEffector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKEffector__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IKEffector__Fields_FWDDECL)
#include <Modloader/app/structs/IKEffector__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKEffector__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
