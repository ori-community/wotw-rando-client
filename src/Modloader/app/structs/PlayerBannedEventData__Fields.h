#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerBannedEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerBannedEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerBannedEventData__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_DateTime__DEFINED)
#define IL2CPP_STRUCT_PlayerBannedEventData__Fields_DEFINED
struct String;
struct PlayerBannedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct Nullable_1_DateTime_ BanExpiration;
    struct String* BanId;
    struct String* BanReason;
    bool PermanentBan;
    struct String* TitleId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerBannedEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerBannedEventData__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayerBannedEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerBannedEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerBannedEventData__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerBannedEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerBannedEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
