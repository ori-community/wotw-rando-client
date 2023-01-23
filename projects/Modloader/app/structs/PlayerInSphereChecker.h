#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerInSphereChecker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerInSphereChecker_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInSphereChecker_DEFINED)
#include <Modloader/app/structs/PlayerInSphereChecker__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerInSphereChecker__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerInSphereChecker_DEFINED
struct PlayerInSphereChecker__Class;
struct PlayerInSphereChecker {
    struct PlayerInSphereChecker__Class* klass;
    MonitorData* monitor;
    struct PlayerInSphereChecker__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerInSphereChecker_FWDDECL)
#define IL2CPP_STRUCT_PlayerInSphereChecker_FWDDECL
#include <Modloader/app/structs/PlayerInSphereChecker__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerInSphereChecker_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInSphereChecker_DEFINED) && !defined(IL2CPP_STRUCT_PlayerInSphereChecker_FWDDECL)
#include <Modloader/app/structs/PlayerInSphereChecker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerInSphereChecker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
