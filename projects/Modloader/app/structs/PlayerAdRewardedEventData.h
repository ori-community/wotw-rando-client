#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerAdRewardedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerAdRewardedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerAdRewardedEventData_DEFINED)
#include <Modloader/app/structs/PlayerAdRewardedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerAdRewardedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerAdRewardedEventData_DEFINED
struct PlayerAdRewardedEventData__Class;
struct PlayerAdRewardedEventData {
    struct PlayerAdRewardedEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerAdRewardedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerAdRewardedEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerAdRewardedEventData_FWDDECL
#include <Modloader/app/structs/PlayerAdRewardedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerAdRewardedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerAdRewardedEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerAdRewardedEventData_FWDDECL)
#include <Modloader/app/structs/PlayerAdRewardedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerAdRewardedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
