#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FlammablesStateCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FlammablesStateCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlammablesStateCondition_DEFINED)
#include <Modloader/app/structs/FlammablesStateCondition__Fields.h>
#if defined(IL2CPP_STRUCT_FlammablesStateCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_FlammablesStateCondition_DEFINED
struct FlammablesStateCondition__Class;
struct FlammablesStateCondition {
    struct FlammablesStateCondition__Class* klass;
    MonitorData* monitor;
    struct FlammablesStateCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FlammablesStateCondition_FWDDECL)
#define IL2CPP_STRUCT_FlammablesStateCondition_FWDDECL
#include <Modloader/app/structs/FlammablesStateCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_FlammablesStateCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlammablesStateCondition_DEFINED) && !defined(IL2CPP_STRUCT_FlammablesStateCondition_FWDDECL)
#include <Modloader/app/structs/FlammablesStateCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FlammablesStateCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
