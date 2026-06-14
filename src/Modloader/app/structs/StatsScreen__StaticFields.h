#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatsScreen__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatsScreen__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatsScreen__StaticFields_DEFINED)
#define IL2CPP_STRUCT_StatsScreen__StaticFields_DEFINED
struct StatsScreen;
struct StatsScreen__StaticFields {
    struct StatsScreen* Instance;
};
#endif
#if !defined(IL2CPP_STRUCT_StatsScreen__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_StatsScreen__StaticFields_FWDDECL
#include <Modloader/app/structs/StatsScreen.h>
#endif
#undef IL2CPP_STRUCT_StatsScreen__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatsScreen__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_StatsScreen__StaticFields_FWDDECL)
#include <Modloader/app/structs/StatsScreen__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatsScreen__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
