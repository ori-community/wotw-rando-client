#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraPositionTracker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraPositionTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraPositionTracker_DEFINED)
#include <Modloader/app/structs/CameraPositionTracker__Fields.h>
#if defined(IL2CPP_STRUCT_CameraPositionTracker__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraPositionTracker_DEFINED
struct CameraPositionTracker__Class;
struct CameraPositionTracker {
    struct CameraPositionTracker__Class* klass;
    MonitorData* monitor;
    struct CameraPositionTracker__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraPositionTracker_FWDDECL)
#define IL2CPP_STRUCT_CameraPositionTracker_FWDDECL
#include <Modloader/app/structs/CameraPositionTracker__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraPositionTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraPositionTracker_DEFINED) && !defined(IL2CPP_STRUCT_CameraPositionTracker_FWDDECL)
#include <Modloader/app/structs/CameraPositionTracker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraPositionTracker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
