#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MortarWormIdleState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MortarWormIdleState_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarWormIdleState_DEFINED)
#include <Modloader/app/structs/MortarWormIdleState__Fields.h>
#if defined(IL2CPP_STRUCT_MortarWormIdleState__Fields_DEFINED)
#define IL2CPP_STRUCT_MortarWormIdleState_DEFINED
struct MortarWormIdleState__Class;
struct MortarWormIdleState {
    struct MortarWormIdleState__Class* klass;
    MonitorData* monitor;
    struct MortarWormIdleState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MortarWormIdleState_FWDDECL)
#define IL2CPP_STRUCT_MortarWormIdleState_FWDDECL
#include <Modloader/app/structs/MortarWormIdleState__Class.h>
#endif
#undef IL2CPP_STRUCT_MortarWormIdleState_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarWormIdleState_DEFINED) && !defined(IL2CPP_STRUCT_MortarWormIdleState_FWDDECL)
#include <Modloader/app/structs/MortarWormIdleState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MortarWormIdleState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
