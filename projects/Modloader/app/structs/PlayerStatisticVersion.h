#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerStatisticVersion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerStatisticVersion_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerStatisticVersion_DEFINED)
#include <Modloader/app/structs/PlayerStatisticVersion__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerStatisticVersion__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerStatisticVersion_DEFINED
struct PlayerStatisticVersion__Class;
struct PlayerStatisticVersion {
    struct PlayerStatisticVersion__Class* klass;
    MonitorData* monitor;
    struct PlayerStatisticVersion__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerStatisticVersion_FWDDECL)
#define IL2CPP_STRUCT_PlayerStatisticVersion_FWDDECL
#include <Modloader/app/structs/PlayerStatisticVersion__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerStatisticVersion_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerStatisticVersion_DEFINED) && !defined(IL2CPP_STRUCT_PlayerStatisticVersion_FWDDECL)
#include <Modloader/app/structs/PlayerStatisticVersion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerStatisticVersion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
