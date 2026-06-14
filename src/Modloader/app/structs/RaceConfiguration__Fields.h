#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceConfiguration__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceConfiguration__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceConfiguration__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceConfiguration__Fields_DEFINED
struct ITrialData;
struct ITrialHandler;
struct __declspec(align(8)) RaceConfiguration__Fields {
    bool ShouldSpectate;
    bool ShowLeaderboard;
    struct ITrialData* Race;
    struct ITrialHandler* Handler;
};
#endif
#if !defined(IL2CPP_STRUCT_RaceConfiguration__Fields_FWDDECL)
#define IL2CPP_STRUCT_RaceConfiguration__Fields_FWDDECL
#include <Modloader/app/structs/ITrialData.h>
#include <Modloader/app/structs/ITrialHandler.h>
#endif
#undef IL2CPP_STRUCT_RaceConfiguration__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceConfiguration__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RaceConfiguration__Fields_FWDDECL)
#include <Modloader/app/structs/RaceConfiguration__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceConfiguration__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
