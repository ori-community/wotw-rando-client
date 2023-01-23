#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShrineCombat_RunningState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShrineCombat_RunningState_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShrineCombat_RunningState_DEFINED)
#include <Modloader/app/structs/ShrineCombat_RunningState__Fields.h>
#if defined(IL2CPP_STRUCT_ShrineCombat_RunningState__Fields_DEFINED)
#define IL2CPP_STRUCT_ShrineCombat_RunningState_DEFINED
struct ShrineCombat_RunningState__Class;
struct ShrineCombat_RunningState {
    struct ShrineCombat_RunningState__Class* klass;
    MonitorData* monitor;
    struct ShrineCombat_RunningState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShrineCombat_RunningState_FWDDECL)
#define IL2CPP_STRUCT_ShrineCombat_RunningState_FWDDECL
#include <Modloader/app/structs/ShrineCombat_RunningState__Class.h>
#endif
#undef IL2CPP_STRUCT_ShrineCombat_RunningState_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShrineCombat_RunningState_DEFINED) && !defined(IL2CPP_STRUCT_ShrineCombat_RunningState_FWDDECL)
#include <Modloader/app/structs/ShrineCombat_RunningState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShrineCombat_RunningState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
