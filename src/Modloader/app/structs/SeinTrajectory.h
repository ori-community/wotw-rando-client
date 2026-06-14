#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinTrajectory_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinTrajectory_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinTrajectory_DEFINED)
#include <Modloader/app/structs/SeinTrajectory__Fields.h>
#if defined(IL2CPP_STRUCT_SeinTrajectory__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinTrajectory_DEFINED
struct SeinTrajectory__Class;
struct SeinTrajectory {
    struct SeinTrajectory__Class* klass;
    MonitorData* monitor;
    struct SeinTrajectory__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinTrajectory_FWDDECL)
#define IL2CPP_STRUCT_SeinTrajectory_FWDDECL
#include <Modloader/app/structs/SeinTrajectory__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinTrajectory_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinTrajectory_DEFINED) && !defined(IL2CPP_STRUCT_SeinTrajectory_FWDDECL)
#include <Modloader/app/structs/SeinTrajectory.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinTrajectory.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
