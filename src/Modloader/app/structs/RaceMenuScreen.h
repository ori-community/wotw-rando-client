#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceMenuScreen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceMenuScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceMenuScreen_DEFINED)
#include <Modloader/app/structs/RaceMenuScreen__Fields.h>
#if defined(IL2CPP_STRUCT_RaceMenuScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceMenuScreen_DEFINED
struct RaceMenuScreen__Class;
struct RaceMenuScreen {
    struct RaceMenuScreen__Class* klass;
    MonitorData* monitor;
    struct RaceMenuScreen__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceMenuScreen_FWDDECL)
#define IL2CPP_STRUCT_RaceMenuScreen_FWDDECL
#include <Modloader/app/structs/RaceMenuScreen__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceMenuScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceMenuScreen_DEFINED) && !defined(IL2CPP_STRUCT_RaceMenuScreen_FWDDECL)
#include <Modloader/app/structs/RaceMenuScreen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceMenuScreen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
