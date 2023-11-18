#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransformRecorderData_Data__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransformRecorderData_Data__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformRecorderData_Data__Fields_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_TransformRecorderData_Data__Fields_DEFINED
struct String;
struct __declspec(align(8)) TransformRecorderData_Data__Fields {
    struct String* UniqueID;
    struct Vector3 Position;
    struct Quaternion Rotation;
    struct Vector3 Velocity;
    struct Vector3 AngularVelocity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransformRecorderData_Data__Fields_FWDDECL)
#define IL2CPP_STRUCT_TransformRecorderData_Data__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TransformRecorderData_Data__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformRecorderData_Data__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TransformRecorderData_Data__Fields_FWDDECL)
#include <Modloader/app/structs/TransformRecorderData_Data__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransformRecorderData_Data__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
