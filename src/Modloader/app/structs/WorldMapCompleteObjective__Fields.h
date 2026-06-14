#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WorldMapCompleteObjective__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WorldMapCompleteObjective__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldMapCompleteObjective__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED)
#define IL2CPP_STRUCT_WorldMapCompleteObjective__Fields_DEFINED
struct Objective;
struct WorldMapCompleteObjective__Fields {
    struct ActionMethod__Fields _;
    struct Objective* Objective;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WorldMapCompleteObjective__Fields_FWDDECL)
#define IL2CPP_STRUCT_WorldMapCompleteObjective__Fields_FWDDECL
#include <Modloader/app/structs/Objective.h>
#endif
#undef IL2CPP_STRUCT_WorldMapCompleteObjective__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldMapCompleteObjective__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WorldMapCompleteObjective__Fields_FWDDECL)
#include <Modloader/app/structs/WorldMapCompleteObjective__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WorldMapCompleteObjective__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
