#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FishIdleState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FishIdleState_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishIdleState_DEFINED)
#include <Modloader/app/structs/FishIdleState__Fields.h>
#if defined(IL2CPP_STRUCT_FishIdleState__Fields_DEFINED)
#define IL2CPP_STRUCT_FishIdleState_DEFINED
struct FishIdleState__Class;
struct FishIdleState {
    struct FishIdleState__Class* klass;
    MonitorData* monitor;
    struct FishIdleState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FishIdleState_FWDDECL)
#define IL2CPP_STRUCT_FishIdleState_FWDDECL
#include <Modloader/app/structs/FishIdleState__Class.h>
#endif
#undef IL2CPP_STRUCT_FishIdleState_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishIdleState_DEFINED) && !defined(IL2CPP_STRUCT_FishIdleState_FWDDECL)
#include <Modloader/app/structs/FishIdleState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FishIdleState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
