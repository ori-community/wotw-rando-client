#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FeedingGroundsHideZone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FeedingGroundsHideZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FeedingGroundsHideZone__Fields_DEFINED)
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundsState__Enum.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerInsideZoneChecker__Fields_DEFINED) && defined(IL2CPP_STRUCT_PetrifiedOwlFeedingGroundsState__Enum_DEFINED)
#define IL2CPP_STRUCT_FeedingGroundsHideZone__Fields_DEFINED
struct FeedingGroundsHideZone__Fields {
    struct PlayerInsideZoneChecker__Fields _;
    PetrifiedOwlFeedingGroundsState__Enum HideZoneState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FeedingGroundsHideZone__Fields_FWDDECL)
#define IL2CPP_STRUCT_FeedingGroundsHideZone__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_FeedingGroundsHideZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FeedingGroundsHideZone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FeedingGroundsHideZone__Fields_FWDDECL)
#include <Modloader/app/structs/FeedingGroundsHideZone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FeedingGroundsHideZone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
