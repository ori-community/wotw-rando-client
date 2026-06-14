#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CanSkipRaceCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CanSkipRaceCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_CanSkipRaceCondition_DEFINED)
#include <Modloader/app/structs/CanSkipRaceCondition__Fields.h>
#if defined(IL2CPP_STRUCT_CanSkipRaceCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_CanSkipRaceCondition_DEFINED
struct CanSkipRaceCondition__Class;
struct CanSkipRaceCondition {
    struct CanSkipRaceCondition__Class* klass;
    MonitorData* monitor;
    struct CanSkipRaceCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CanSkipRaceCondition_FWDDECL)
#define IL2CPP_STRUCT_CanSkipRaceCondition_FWDDECL
#include <Modloader/app/structs/CanSkipRaceCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_CanSkipRaceCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_CanSkipRaceCondition_DEFINED) && !defined(IL2CPP_STRUCT_CanSkipRaceCondition_FWDDECL)
#include <Modloader/app/structs/CanSkipRaceCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CanSkipRaceCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
