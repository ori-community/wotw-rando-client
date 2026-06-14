#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerStatisticVersion_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerStatisticVersion_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerStatisticVersion_1__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_DateTime__DEFINED)
#define IL2CPP_STRUCT_PlayerStatisticVersion_1__Fields_DEFINED
struct String;
struct __declspec(align(8)) PlayerStatisticVersion_1__Fields {
    struct DateTime ActivationTime;
    struct Nullable_1_DateTime_ DeactivationTime;
    struct Nullable_1_DateTime_ ScheduledActivationTime;
    struct Nullable_1_DateTime_ ScheduledDeactivationTime;
    struct String* StatisticName;
    uint32_t Version;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerStatisticVersion_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerStatisticVersion_1__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayerStatisticVersion_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerStatisticVersion_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerStatisticVersion_1__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerStatisticVersion_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerStatisticVersion_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
