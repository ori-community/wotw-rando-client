#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerTransform_TransformData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerTransform_TransformData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerTransform_TransformData_DEFINED)
#define IL2CPP_STRUCT_ServerTransform_TransformData_DEFINED
struct Vector3Ser;
struct Vector4Ser;
struct ServerTransform_TransformData {
    struct Vector3Ser* position;
    struct Vector4Ser* rotation;
    struct Vector3Ser* scale;
};
#endif
#if !defined(IL2CPP_STRUCT_ServerTransform_TransformData_FWDDECL)
#define IL2CPP_STRUCT_ServerTransform_TransformData_FWDDECL
#include <Modloader/app/structs/Vector3Ser.h>
#include <Modloader/app/structs/Vector4Ser.h>
#endif
#undef IL2CPP_STRUCT_ServerTransform_TransformData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerTransform_TransformData_DEFINED) && !defined(IL2CPP_STRUCT_ServerTransform_TransformData_FWDDECL)
#include <Modloader/app/structs/ServerTransform_TransformData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerTransform_TransformData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
