#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Database_c_DisplayClass11_0__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Database_c_DisplayClass11_0__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Database_c_DisplayClass11_0__Fields_DEFINED)
#define IL2CPP_STRUCT_Database_c_DisplayClass11_0__Fields_DEFINED
struct RaceLeaderBoard;
struct String;
struct ITrialData;
struct RaceSettings;
struct __declspec(align(8)) Database_c_DisplayClass11_0__Fields {
    struct RaceLeaderBoard* leaderBoard;
    struct String* raceId;
    struct ITrialData* trialData;
    struct RaceSettings* raceSettings;
};
#endif
#if !defined(IL2CPP_STRUCT_Database_c_DisplayClass11_0__Fields_FWDDECL)
#define IL2CPP_STRUCT_Database_c_DisplayClass11_0__Fields_FWDDECL
#include <Modloader/app/structs/ITrialData.h>
#include <Modloader/app/structs/RaceLeaderBoard.h>
#include <Modloader/app/structs/RaceSettings.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Database_c_DisplayClass11_0__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Database_c_DisplayClass11_0__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Database_c_DisplayClass11_0__Fields_FWDDECL)
#include <Modloader/app/structs/Database_c_DisplayClass11_0__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Database_c_DisplayClass11_0__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
