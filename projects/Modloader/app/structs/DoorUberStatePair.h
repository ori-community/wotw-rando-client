#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DoorUberStatePair_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DoorUberStatePair_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoorUberStatePair_DEFINED)
#include <Modloader/app/structs/DoorUberStatePair__Fields.h>
#if defined(IL2CPP_STRUCT_DoorUberStatePair__Fields_DEFINED)
#define IL2CPP_STRUCT_DoorUberStatePair_DEFINED
struct DoorUberStatePair__Class;
struct DoorUberStatePair {
    struct DoorUberStatePair__Class* klass;
    MonitorData* monitor;
    struct DoorUberStatePair__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DoorUberStatePair_FWDDECL)
#define IL2CPP_STRUCT_DoorUberStatePair_FWDDECL
#include <Modloader/app/structs/DoorUberStatePair__Class.h>
#endif
#undef IL2CPP_STRUCT_DoorUberStatePair_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoorUberStatePair_DEFINED) && !defined(IL2CPP_STRUCT_DoorUberStatePair_FWDDECL)
#include <Modloader/app/structs/DoorUberStatePair.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DoorUberStatePair.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
