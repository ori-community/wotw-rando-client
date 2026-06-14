#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatsScreen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatsScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatsScreen_DEFINED)
#include <Modloader/app/structs/StatsScreen__Fields.h>
#if defined(IL2CPP_STRUCT_StatsScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_StatsScreen_DEFINED
struct StatsScreen__Class;
struct StatsScreen {
    struct StatsScreen__Class* klass;
    MonitorData* monitor;
    struct StatsScreen__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StatsScreen_FWDDECL)
#define IL2CPP_STRUCT_StatsScreen_FWDDECL
#include <Modloader/app/structs/StatsScreen__Class.h>
#endif
#undef IL2CPP_STRUCT_StatsScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatsScreen_DEFINED) && !defined(IL2CPP_STRUCT_StatsScreen_FWDDECL)
#include <Modloader/app/structs/StatsScreen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatsScreen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
