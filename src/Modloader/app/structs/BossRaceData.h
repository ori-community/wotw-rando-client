#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BossRaceData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BossRaceData_INITIALIZING
#if !defined(IL2CPP_STRUCT_BossRaceData_DEFINED)
#include <Modloader/app/structs/BossRaceData__Fields.h>
#if defined(IL2CPP_STRUCT_BossRaceData__Fields_DEFINED)
#define IL2CPP_STRUCT_BossRaceData_DEFINED
struct BossRaceData__Class;
struct BossRaceData {
    struct BossRaceData__Class* klass;
    MonitorData* monitor;
    struct BossRaceData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BossRaceData_FWDDECL)
#define IL2CPP_STRUCT_BossRaceData_FWDDECL
#include <Modloader/app/structs/BossRaceData__Class.h>
#endif
#undef IL2CPP_STRUCT_BossRaceData_INITIALIZING
#if !defined(IL2CPP_STRUCT_BossRaceData_DEFINED) && !defined(IL2CPP_STRUCT_BossRaceData_FWDDECL)
#include <Modloader/app/structs/BossRaceData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BossRaceData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
