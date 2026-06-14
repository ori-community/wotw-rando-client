#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RammingBehaviour_RamState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RammingBehaviour_RamState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingBehaviour_RamState_DEFINED)
#include <Modloader/app/structs/RammingBehaviour_RamState__Fields.h>
#if defined(IL2CPP_STRUCT_RammingBehaviour_RamState__Fields_DEFINED)
#define IL2CPP_STRUCT_RammingBehaviour_RamState_DEFINED
struct RammingBehaviour_RamState__Class;
struct RammingBehaviour_RamState {
    struct RammingBehaviour_RamState__Class* klass;
    MonitorData* monitor;
    struct RammingBehaviour_RamState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RammingBehaviour_RamState_FWDDECL)
#define IL2CPP_STRUCT_RammingBehaviour_RamState_FWDDECL
#include <Modloader/app/structs/RammingBehaviour_RamState__Class.h>
#endif
#undef IL2CPP_STRUCT_RammingBehaviour_RamState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingBehaviour_RamState_DEFINED) && !defined(IL2CPP_STRUCT_RammingBehaviour_RamState_FWDDECL)
#include <Modloader/app/structs/RammingBehaviour_RamState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RammingBehaviour_RamState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
