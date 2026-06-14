#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WormEmergingState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WormEmergingState_INITIALIZING
#if !defined(IL2CPP_STRUCT_WormEmergingState_DEFINED)
#include <Modloader/app/structs/WormEmergingState__Fields.h>
#if defined(IL2CPP_STRUCT_WormEmergingState__Fields_DEFINED)
#define IL2CPP_STRUCT_WormEmergingState_DEFINED
struct WormEmergingState__Class;
struct WormEmergingState {
    struct WormEmergingState__Class* klass;
    MonitorData* monitor;
    struct WormEmergingState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WormEmergingState_FWDDECL)
#define IL2CPP_STRUCT_WormEmergingState_FWDDECL
#include <Modloader/app/structs/WormEmergingState__Class.h>
#endif
#undef IL2CPP_STRUCT_WormEmergingState_INITIALIZING
#if !defined(IL2CPP_STRUCT_WormEmergingState_DEFINED) && !defined(IL2CPP_STRUCT_WormEmergingState_FWDDECL)
#include <Modloader/app/structs/WormEmergingState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WormEmergingState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
