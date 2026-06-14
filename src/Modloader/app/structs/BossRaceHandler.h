#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BossRaceHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BossRaceHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_BossRaceHandler_DEFINED)
#include <Modloader/app/structs/BossRaceHandler__Fields.h>
#if defined(IL2CPP_STRUCT_BossRaceHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_BossRaceHandler_DEFINED
struct BossRaceHandler__Class;
struct BossRaceHandler {
    struct BossRaceHandler__Class* klass;
    MonitorData* monitor;
    struct BossRaceHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BossRaceHandler_FWDDECL)
#define IL2CPP_STRUCT_BossRaceHandler_FWDDECL
#include <Modloader/app/structs/BossRaceHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_BossRaceHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_BossRaceHandler_DEFINED) && !defined(IL2CPP_STRUCT_BossRaceHandler_FWDDECL)
#include <Modloader/app/structs/BossRaceHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BossRaceHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
