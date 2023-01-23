#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerUberStateStats_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerUberStateStats_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateStats_DEFINED)
#include <Modloader/app/structs/PlayerUberStateStats__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerUberStateStats__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerUberStateStats_DEFINED
struct PlayerUberStateStats__Class;
struct PlayerUberStateStats {
    struct PlayerUberStateStats__Class* klass;
    MonitorData* monitor;
    struct PlayerUberStateStats__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerUberStateStats_FWDDECL)
#define IL2CPP_STRUCT_PlayerUberStateStats_FWDDECL
#include <Modloader/app/structs/PlayerUberStateStats__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerUberStateStats_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateStats_DEFINED) && !defined(IL2CPP_STRUCT_PlayerUberStateStats_FWDDECL)
#include <Modloader/app/structs/PlayerUberStateStats.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerUberStateStats.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
