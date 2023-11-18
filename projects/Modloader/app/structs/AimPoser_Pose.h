#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AimPoser_Pose_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AimPoser_Pose_INITIALIZING
#if !defined(IL2CPP_STRUCT_AimPoser_Pose_DEFINED)
#include <Modloader/app/structs/AimPoser_Pose__Fields.h>
#if defined(IL2CPP_STRUCT_AimPoser_Pose__Fields_DEFINED)
#define IL2CPP_STRUCT_AimPoser_Pose_DEFINED
struct AimPoser_Pose__Class;
struct AimPoser_Pose {
    struct AimPoser_Pose__Class* klass;
    MonitorData* monitor;
    struct AimPoser_Pose__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AimPoser_Pose_FWDDECL)
#define IL2CPP_STRUCT_AimPoser_Pose_FWDDECL
#include <Modloader/app/structs/AimPoser_Pose__Class.h>
#endif
#undef IL2CPP_STRUCT_AimPoser_Pose_INITIALIZING
#if !defined(IL2CPP_STRUCT_AimPoser_Pose_DEFINED) && !defined(IL2CPP_STRUCT_AimPoser_Pose_FWDDECL)
#include <Modloader/app/structs/AimPoser_Pose.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AimPoser_Pose.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
