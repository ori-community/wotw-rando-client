#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WormHiddenState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WormHiddenState_INITIALIZING
#if !defined(IL2CPP_STRUCT_WormHiddenState_DEFINED)
#include <Modloader/app/structs/WormHiddenState__Fields.h>
#if defined(IL2CPP_STRUCT_WormHiddenState__Fields_DEFINED)
#define IL2CPP_STRUCT_WormHiddenState_DEFINED
struct WormHiddenState__Class;
struct WormHiddenState {
    struct WormHiddenState__Class* klass;
    MonitorData* monitor;
    struct WormHiddenState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WormHiddenState_FWDDECL)
#define IL2CPP_STRUCT_WormHiddenState_FWDDECL
#include <Modloader/app/structs/WormHiddenState__Class.h>
#endif
#undef IL2CPP_STRUCT_WormHiddenState_INITIALIZING
#if !defined(IL2CPP_STRUCT_WormHiddenState_DEFINED) && !defined(IL2CPP_STRUCT_WormHiddenState_FWDDECL)
#include <Modloader/app/structs/WormHiddenState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WormHiddenState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
