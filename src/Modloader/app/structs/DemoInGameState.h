#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DemoInGameState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DemoInGameState_INITIALIZING
#if !defined(IL2CPP_STRUCT_DemoInGameState_DEFINED)
#include <Modloader/app/structs/DemoInGameState__Fields.h>
#if defined(IL2CPP_STRUCT_DemoInGameState__Fields_DEFINED)
#define IL2CPP_STRUCT_DemoInGameState_DEFINED
struct DemoInGameState__Class;
struct DemoInGameState {
    struct DemoInGameState__Class* klass;
    MonitorData* monitor;
    struct DemoInGameState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DemoInGameState_FWDDECL)
#define IL2CPP_STRUCT_DemoInGameState_FWDDECL
#include <Modloader/app/structs/DemoInGameState__Class.h>
#endif
#undef IL2CPP_STRUCT_DemoInGameState_INITIALIZING
#if !defined(IL2CPP_STRUCT_DemoInGameState_DEFINED) && !defined(IL2CPP_STRUCT_DemoInGameState_FWDDECL)
#include <Modloader/app/structs/DemoInGameState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DemoInGameState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
