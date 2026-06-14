#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RammingRunningState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RammingRunningState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingRunningState_DEFINED)
#include <Modloader/app/structs/RammingRunningState__Fields.h>
#if defined(IL2CPP_STRUCT_RammingRunningState__Fields_DEFINED)
#define IL2CPP_STRUCT_RammingRunningState_DEFINED
struct RammingRunningState__Class;
struct RammingRunningState {
    struct RammingRunningState__Class* klass;
    MonitorData* monitor;
    struct RammingRunningState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RammingRunningState_FWDDECL)
#define IL2CPP_STRUCT_RammingRunningState_FWDDECL
#include <Modloader/app/structs/RammingRunningState__Class.h>
#endif
#undef IL2CPP_STRUCT_RammingRunningState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingRunningState_DEFINED) && !defined(IL2CPP_STRUCT_RammingRunningState_FWDDECL)
#include <Modloader/app/structs/RammingRunningState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RammingRunningState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
