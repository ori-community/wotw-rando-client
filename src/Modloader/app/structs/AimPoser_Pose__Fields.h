#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AimPoser_Pose__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AimPoser_Pose__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AimPoser_Pose__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_AimPoser_Pose__Fields_DEFINED
struct String;
struct __declspec(align(8)) AimPoser_Pose__Fields {
    bool visualize;
    struct String* name;
    struct Vector3 direction;
    float yaw;
    float pitch;
    float angleBuffer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AimPoser_Pose__Fields_FWDDECL)
#define IL2CPP_STRUCT_AimPoser_Pose__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_AimPoser_Pose__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AimPoser_Pose__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AimPoser_Pose__Fields_FWDDECL)
#include <Modloader/app/structs/AimPoser_Pose__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AimPoser_Pose__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
