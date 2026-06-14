#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Pose__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Pose__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Pose__Boxed_DEFINED)
#include <Modloader/app/structs/Pose.h>
#if defined(IL2CPP_STRUCT_Pose_DEFINED)
#define IL2CPP_STRUCT_Pose__Boxed_DEFINED
struct Pose__Class;
struct Pose__Boxed {
    struct Pose__Class* klass;
    MonitorData* monitor;
    struct Pose fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Pose__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Pose__Boxed_FWDDECL
#include <Modloader/app/structs/Pose__Class.h>
#endif
#undef IL2CPP_STRUCT_Pose__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Pose__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Pose__Boxed_FWDDECL)
#include <Modloader/app/structs/Pose__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Pose__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
