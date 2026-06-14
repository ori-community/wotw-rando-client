#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RacesEnabledCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RacesEnabledCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_RacesEnabledCondition_DEFINED)
#include <Modloader/app/structs/RacesEnabledCondition__Fields.h>
#if defined(IL2CPP_STRUCT_RacesEnabledCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_RacesEnabledCondition_DEFINED
struct RacesEnabledCondition__Class;
struct RacesEnabledCondition {
    struct RacesEnabledCondition__Class* klass;
    MonitorData* monitor;
    struct RacesEnabledCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RacesEnabledCondition_FWDDECL)
#define IL2CPP_STRUCT_RacesEnabledCondition_FWDDECL
#include <Modloader/app/structs/RacesEnabledCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_RacesEnabledCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_RacesEnabledCondition_DEFINED) && !defined(IL2CPP_STRUCT_RacesEnabledCondition_FWDDECL)
#include <Modloader/app/structs/RacesEnabledCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RacesEnabledCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
