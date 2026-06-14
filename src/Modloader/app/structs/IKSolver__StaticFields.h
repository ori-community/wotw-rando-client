#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKSolver__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKSolver__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolver__StaticFields_DEFINED)
#define IL2CPP_STRUCT_IKSolver__StaticFields_DEFINED
struct Transform__Array;
struct Vector3__Array;
struct Quaternion__Array;
struct IKSolver__StaticFields {
    struct Transform__Array* BatchedTransformQueryTransforms;
    struct Vector3__Array* BatchedTransformQueryPositions;
    struct Quaternion__Array* BatchedTransformQueryRotations;
};
#endif
#if !defined(IL2CPP_STRUCT_IKSolver__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_IKSolver__StaticFields_FWDDECL
#include <Modloader/app/structs/Quaternion__Array.h>
#include <Modloader/app/structs/Transform__Array.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_IKSolver__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolver__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_IKSolver__StaticFields_FWDDECL)
#include <Modloader/app/structs/IKSolver__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKSolver__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
