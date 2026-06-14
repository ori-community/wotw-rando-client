#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MenuRaceState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MenuRaceState_INITIALIZING
#if !defined(IL2CPP_STRUCT_MenuRaceState_DEFINED)
#include <Modloader/app/structs/MenuRaceState__Fields.h>
#if defined(IL2CPP_STRUCT_MenuRaceState__Fields_DEFINED)
#define IL2CPP_STRUCT_MenuRaceState_DEFINED
struct MenuRaceState__Class;
struct MenuRaceState {
    struct MenuRaceState__Class* klass;
    MonitorData* monitor;
    struct MenuRaceState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MenuRaceState_FWDDECL)
#define IL2CPP_STRUCT_MenuRaceState_FWDDECL
#include <Modloader/app/structs/MenuRaceState__Class.h>
#endif
#undef IL2CPP_STRUCT_MenuRaceState_INITIALIZING
#if !defined(IL2CPP_STRUCT_MenuRaceState_DEFINED) && !defined(IL2CPP_STRUCT_MenuRaceState_FWDDECL)
#include <Modloader/app/structs/MenuRaceState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MenuRaceState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
