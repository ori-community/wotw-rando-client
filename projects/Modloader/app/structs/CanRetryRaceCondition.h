#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CanRetryRaceCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CanRetryRaceCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_CanRetryRaceCondition_DEFINED)
#include <Modloader/app/structs/CanRetryRaceCondition__Fields.h>
#if defined(IL2CPP_STRUCT_CanRetryRaceCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_CanRetryRaceCondition_DEFINED
struct CanRetryRaceCondition__Class;
struct CanRetryRaceCondition {
    struct CanRetryRaceCondition__Class* klass;
    MonitorData* monitor;
    struct CanRetryRaceCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CanRetryRaceCondition_FWDDECL)
#define IL2CPP_STRUCT_CanRetryRaceCondition_FWDDECL
#include <Modloader/app/structs/CanRetryRaceCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_CanRetryRaceCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_CanRetryRaceCondition_DEFINED) && !defined(IL2CPP_STRUCT_CanRetryRaceCondition_FWDDECL)
#include <Modloader/app/structs/CanRetryRaceCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CanRetryRaceCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
