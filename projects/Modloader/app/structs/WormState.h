#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WormState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WormState_INITIALIZING
#if !defined(IL2CPP_STRUCT_WormState_DEFINED)
#include <Modloader/app/structs/WormState__Fields.h>
#if defined(IL2CPP_STRUCT_WormState__Fields_DEFINED)
#define IL2CPP_STRUCT_WormState_DEFINED
struct WormState__Class;
struct WormState {
    struct WormState__Class* klass;
    MonitorData* monitor;
    struct WormState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WormState_FWDDECL)
#define IL2CPP_STRUCT_WormState_FWDDECL
#include <Modloader/app/structs/WormState__Class.h>
#endif
#undef IL2CPP_STRUCT_WormState_INITIALIZING
#if !defined(IL2CPP_STRUCT_WormState_DEFINED) && !defined(IL2CPP_STRUCT_WormState_FWDDECL)
#include <Modloader/app/structs/WormState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WormState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
