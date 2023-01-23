#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerUberStatePinInformation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerUberStatePinInformation_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStatePinInformation_DEFINED)
#include <Modloader/app/structs/PlayerUberStatePinInformation__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerUberStatePinInformation__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerUberStatePinInformation_DEFINED
struct PlayerUberStatePinInformation__Class;
struct PlayerUberStatePinInformation {
    struct PlayerUberStatePinInformation__Class* klass;
    MonitorData* monitor;
    struct PlayerUberStatePinInformation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerUberStatePinInformation_FWDDECL)
#define IL2CPP_STRUCT_PlayerUberStatePinInformation_FWDDECL
#include <Modloader/app/structs/PlayerUberStatePinInformation__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerUberStatePinInformation_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStatePinInformation_DEFINED) && !defined(IL2CPP_STRUCT_PlayerUberStatePinInformation_FWDDECL)
#include <Modloader/app/structs/PlayerUberStatePinInformation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerUberStatePinInformation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
