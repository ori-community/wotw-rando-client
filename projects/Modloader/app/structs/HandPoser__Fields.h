#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HandPoser__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HandPoser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HandPoser__Fields_DEFINED)
#include <Modloader/app/structs/Poser__Fields.h>
#if defined(IL2CPP_STRUCT_Poser__Fields_DEFINED)
#define IL2CPP_STRUCT_HandPoser__Fields_DEFINED
struct Transform;
struct Transform__Array;
struct Vector3__Array;
struct Quaternion__Array;
struct HandPoser__Fields {
    struct Poser__Fields _;
    struct Transform* _poseRoot;
    struct Transform__Array* children;
    struct Transform__Array* poseChildren;
    struct Vector3__Array* defaultLocalPositions;
    struct Quaternion__Array* defaultLocalRotations;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HandPoser__Fields_FWDDECL)
#define IL2CPP_STRUCT_HandPoser__Fields_FWDDECL
#include <Modloader/app/structs/Quaternion__Array.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Transform__Array.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_HandPoser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HandPoser__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HandPoser__Fields_FWDDECL)
#include <Modloader/app/structs/HandPoser__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HandPoser__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
