#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RammingBrakingState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RammingBrakingState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingBrakingState_DEFINED)
#include <Modloader/app/structs/RammingBrakingState__Fields.h>
#if defined(IL2CPP_STRUCT_RammingBrakingState__Fields_DEFINED)
#define IL2CPP_STRUCT_RammingBrakingState_DEFINED
struct RammingBrakingState__Class;
struct RammingBrakingState {
    struct RammingBrakingState__Class* klass;
    MonitorData* monitor;
    struct RammingBrakingState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RammingBrakingState_FWDDECL)
#define IL2CPP_STRUCT_RammingBrakingState_FWDDECL
#include <Modloader/app/structs/RammingBrakingState__Class.h>
#endif
#undef IL2CPP_STRUCT_RammingBrakingState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingBrakingState_DEFINED) && !defined(IL2CPP_STRUCT_RammingBrakingState_FWDDECL)
#include <Modloader/app/structs/RammingBrakingState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RammingBrakingState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
