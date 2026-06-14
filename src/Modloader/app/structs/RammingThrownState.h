#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RammingThrownState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RammingThrownState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingThrownState_DEFINED)
#include <Modloader/app/structs/RammingThrownState__Fields.h>
#if defined(IL2CPP_STRUCT_RammingThrownState__Fields_DEFINED)
#define IL2CPP_STRUCT_RammingThrownState_DEFINED
struct RammingThrownState__Class;
struct RammingThrownState {
    struct RammingThrownState__Class* klass;
    MonitorData* monitor;
    struct RammingThrownState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RammingThrownState_FWDDECL)
#define IL2CPP_STRUCT_RammingThrownState_FWDDECL
#include <Modloader/app/structs/RammingThrownState__Class.h>
#endif
#undef IL2CPP_STRUCT_RammingThrownState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingThrownState_DEFINED) && !defined(IL2CPP_STRUCT_RammingThrownState_FWDDECL)
#include <Modloader/app/structs/RammingThrownState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RammingThrownState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
