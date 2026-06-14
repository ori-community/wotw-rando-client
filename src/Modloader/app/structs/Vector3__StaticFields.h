#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Vector3__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Vector3__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vector3__StaticFields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_Vector3__StaticFields_DEFINED
struct Vector3__StaticFields {
    struct Vector3 zeroVector;
    struct Vector3 oneVector;
    struct Vector3 upVector;
    struct Vector3 downVector;
    struct Vector3 leftVector;
    struct Vector3 rightVector;
    struct Vector3 forwardVector;
    struct Vector3 backVector;
    struct Vector3 positiveInfinityVector;
    struct Vector3 negativeInfinityVector;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Vector3__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Vector3__StaticFields_FWDDECL
#endif
#undef IL2CPP_STRUCT_Vector3__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vector3__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Vector3__StaticFields_FWDDECL)
#include <Modloader/app/structs/Vector3__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Vector3__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
