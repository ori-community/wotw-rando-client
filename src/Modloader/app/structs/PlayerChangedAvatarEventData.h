#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerChangedAvatarEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerChangedAvatarEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerChangedAvatarEventData_DEFINED)
#include <Modloader/app/structs/PlayerChangedAvatarEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerChangedAvatarEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerChangedAvatarEventData_DEFINED
struct PlayerChangedAvatarEventData__Class;
struct PlayerChangedAvatarEventData {
    struct PlayerChangedAvatarEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerChangedAvatarEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerChangedAvatarEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerChangedAvatarEventData_FWDDECL
#include <Modloader/app/structs/PlayerChangedAvatarEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerChangedAvatarEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerChangedAvatarEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerChangedAvatarEventData_FWDDECL)
#include <Modloader/app/structs/PlayerChangedAvatarEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerChangedAvatarEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
