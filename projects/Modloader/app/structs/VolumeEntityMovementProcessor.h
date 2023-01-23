#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VolumeEntityMovementProcessor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VolumeEntityMovementProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumeEntityMovementProcessor_DEFINED)
#include <Modloader/app/structs/VolumeEntityMovementProcessor__Fields.h>
#if defined(IL2CPP_STRUCT_VolumeEntityMovementProcessor__Fields_DEFINED)
#define IL2CPP_STRUCT_VolumeEntityMovementProcessor_DEFINED
struct VolumeEntityMovementProcessor__Class;
struct VolumeEntityMovementProcessor {
    struct VolumeEntityMovementProcessor__Class* klass;
    MonitorData* monitor;
    struct VolumeEntityMovementProcessor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VolumeEntityMovementProcessor_FWDDECL)
#define IL2CPP_STRUCT_VolumeEntityMovementProcessor_FWDDECL
#include <Modloader/app/structs/VolumeEntityMovementProcessor__Class.h>
#endif
#undef IL2CPP_STRUCT_VolumeEntityMovementProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumeEntityMovementProcessor_DEFINED) && !defined(IL2CPP_STRUCT_VolumeEntityMovementProcessor_FWDDECL)
#include <Modloader/app/structs/VolumeEntityMovementProcessor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VolumeEntityMovementProcessor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
