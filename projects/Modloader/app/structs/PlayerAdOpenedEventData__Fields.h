#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerAdOpenedEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerAdOpenedEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerAdOpenedEventData__Fields_DEFINED)
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerAdOpenedEventData__Fields_DEFINED
struct String;
struct PlayerAdOpenedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String* AdPlacementId;
    struct String* AdPlacementName;
    struct String* AdUnit;
    struct String* RewardId;
    struct String* RewardName;
    struct String* TitleId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerAdOpenedEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerAdOpenedEventData__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayerAdOpenedEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerAdOpenedEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerAdOpenedEventData__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerAdOpenedEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerAdOpenedEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
