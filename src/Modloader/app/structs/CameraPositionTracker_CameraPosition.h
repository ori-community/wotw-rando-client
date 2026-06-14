#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraPositionTracker_CameraPosition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraPositionTracker_CameraPosition_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraPositionTracker_CameraPosition_DEFINED)
#include <Modloader/app/structs/CameraPositionTracker_CameraPosition__Fields.h>
#if defined(IL2CPP_STRUCT_CameraPositionTracker_CameraPosition__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraPositionTracker_CameraPosition_DEFINED
struct CameraPositionTracker_CameraPosition__Class;
struct CameraPositionTracker_CameraPosition {
    struct CameraPositionTracker_CameraPosition__Class* klass;
    MonitorData* monitor;
    struct CameraPositionTracker_CameraPosition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraPositionTracker_CameraPosition_FWDDECL)
#define IL2CPP_STRUCT_CameraPositionTracker_CameraPosition_FWDDECL
#include <Modloader/app/structs/CameraPositionTracker_CameraPosition__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraPositionTracker_CameraPosition_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraPositionTracker_CameraPosition_DEFINED) && !defined(IL2CPP_STRUCT_CameraPositionTracker_CameraPosition_FWDDECL)
#include <Modloader/app/structs/CameraPositionTracker_CameraPosition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraPositionTracker_CameraPosition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
