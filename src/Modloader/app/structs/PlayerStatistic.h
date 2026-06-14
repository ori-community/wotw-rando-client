#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerStatistic_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerStatistic_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerStatistic_DEFINED)
#include <Modloader/app/structs/PlayerStatistic__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerStatistic__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerStatistic_DEFINED
struct PlayerStatistic__Class;
struct PlayerStatistic {
    struct PlayerStatistic__Class* klass;
    MonitorData* monitor;
    struct PlayerStatistic__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerStatistic_FWDDECL)
#define IL2CPP_STRUCT_PlayerStatistic_FWDDECL
#include <Modloader/app/structs/PlayerStatistic__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerStatistic_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerStatistic_DEFINED) && !defined(IL2CPP_STRUCT_PlayerStatistic_FWDDECL)
#include <Modloader/app/structs/PlayerStatistic.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerStatistic.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
