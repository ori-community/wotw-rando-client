#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceSystem__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceSystem__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceSystem__StaticFields_DEFINED)
#define IL2CPP_STRUCT_RaceSystem__StaticFields_DEFINED
struct RaceSystem;
struct LeaderBoardService;
struct RaceSystem__StaticFields {
    struct RaceSystem* _Instance_k__BackingField;
    struct LeaderBoardService* LeaderBoardService;
    bool PreloadRaceScenes;
    bool m_showDebug;
};
#endif
#if !defined(IL2CPP_STRUCT_RaceSystem__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_RaceSystem__StaticFields_FWDDECL
#include <Modloader/app/structs/LeaderBoardService.h>
#include <Modloader/app/structs/RaceSystem.h>
#endif
#undef IL2CPP_STRUCT_RaceSystem__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceSystem__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_RaceSystem__StaticFields_FWDDECL)
#include <Modloader/app/structs/RaceSystem__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceSystem__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
