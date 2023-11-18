#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerInRangeChecker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerInRangeChecker_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInRangeChecker_DEFINED)
#include <Modloader/app/structs/PlayerInRangeChecker__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerInRangeChecker__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerInRangeChecker_DEFINED
struct PlayerInRangeChecker__Class;
struct PlayerInRangeChecker {
    struct PlayerInRangeChecker__Class* klass;
    MonitorData* monitor;
    struct PlayerInRangeChecker__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerInRangeChecker_FWDDECL)
#define IL2CPP_STRUCT_PlayerInRangeChecker_FWDDECL
#include <Modloader/app/structs/PlayerInRangeChecker__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerInRangeChecker_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInRangeChecker_DEFINED) && !defined(IL2CPP_STRUCT_PlayerInRangeChecker_FWDDECL)
#include <Modloader/app/structs/PlayerInRangeChecker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerInRangeChecker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
