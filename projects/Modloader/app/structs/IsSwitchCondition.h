#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IsSwitchCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IsSwitchCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsSwitchCondition_DEFINED)
#include <Modloader/app/structs/IsSwitchCondition__Fields.h>
#if defined(IL2CPP_STRUCT_IsSwitchCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_IsSwitchCondition_DEFINED
struct IsSwitchCondition__Class;
struct IsSwitchCondition {
    struct IsSwitchCondition__Class* klass;
    MonitorData* monitor;
    struct IsSwitchCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IsSwitchCondition_FWDDECL)
#define IL2CPP_STRUCT_IsSwitchCondition_FWDDECL
#include <Modloader/app/structs/IsSwitchCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_IsSwitchCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsSwitchCondition_DEFINED) && !defined(IL2CPP_STRUCT_IsSwitchCondition_FWDDECL)
#include <Modloader/app/structs/IsSwitchCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IsSwitchCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
