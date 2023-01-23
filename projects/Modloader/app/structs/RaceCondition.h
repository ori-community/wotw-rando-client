#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceCondition_DEFINED)
#include <Modloader/app/structs/RaceCondition__Fields.h>
#if defined(IL2CPP_STRUCT_RaceCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceCondition_DEFINED
struct RaceCondition__Class;
struct RaceCondition {
    struct RaceCondition__Class* klass;
    MonitorData* monitor;
    struct RaceCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceCondition_FWDDECL)
#define IL2CPP_STRUCT_RaceCondition_FWDDECL
#include <Modloader/app/structs/RaceCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceCondition_DEFINED) && !defined(IL2CPP_STRUCT_RaceCondition_FWDDECL)
#include <Modloader/app/structs/RaceCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
