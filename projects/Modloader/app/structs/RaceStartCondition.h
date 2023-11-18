#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceStartCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceStartCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceStartCondition_DEFINED)
#include <Modloader/app/structs/RaceStartCondition__Fields.h>
#if defined(IL2CPP_STRUCT_RaceStartCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceStartCondition_DEFINED
struct RaceStartCondition__Class;
struct RaceStartCondition {
    struct RaceStartCondition__Class* klass;
    MonitorData* monitor;
    struct RaceStartCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceStartCondition_FWDDECL)
#define IL2CPP_STRUCT_RaceStartCondition_FWDDECL
#include <Modloader/app/structs/RaceStartCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceStartCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceStartCondition_DEFINED) && !defined(IL2CPP_STRUCT_RaceStartCondition_FWDDECL)
#include <Modloader/app/structs/RaceStartCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceStartCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
