#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerInsideZoneChecker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerInsideZoneChecker_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInsideZoneChecker_DEFINED)
#include <Modloader/app/structs/PlayerInsideZoneChecker__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerInsideZoneChecker__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerInsideZoneChecker_DEFINED
struct PlayerInsideZoneChecker__Class;
struct PlayerInsideZoneChecker {
    struct PlayerInsideZoneChecker__Class* klass;
    MonitorData* monitor;
    struct PlayerInsideZoneChecker__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerInsideZoneChecker_FWDDECL)
#define IL2CPP_STRUCT_PlayerInsideZoneChecker_FWDDECL
#include <Modloader/app/structs/PlayerInsideZoneChecker__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerInsideZoneChecker_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInsideZoneChecker_DEFINED) && !defined(IL2CPP_STRUCT_PlayerInsideZoneChecker_FWDDECL)
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
