#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameMapShowObjective_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameMapShowObjective_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapShowObjective_DEFINED)
#include <Modloader/app/structs/GameMapShowObjective__Fields.h>
#if defined(IL2CPP_STRUCT_GameMapShowObjective__Fields_DEFINED)
#define IL2CPP_STRUCT_GameMapShowObjective_DEFINED
struct GameMapShowObjective__Class;
struct GameMapShowObjective {
    struct GameMapShowObjective__Class* klass;
    MonitorData* monitor;
    struct GameMapShowObjective__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameMapShowObjective_FWDDECL)
#define IL2CPP_STRUCT_GameMapShowObjective_FWDDECL
#include <Modloader/app/structs/GameMapShowObjective__Class.h>
#endif
#undef IL2CPP_STRUCT_GameMapShowObjective_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapShowObjective_DEFINED) && !defined(IL2CPP_STRUCT_GameMapShowObjective_FWDDECL)
#include <Modloader/app/structs/GameMapShowObjective.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameMapShowObjective.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
