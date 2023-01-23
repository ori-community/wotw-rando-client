#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DemoInGameState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DemoInGameState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DemoInGameState__Fields_DEFINED)
#define IL2CPP_STRUCT_DemoInGameState__Fields_DEFINED
struct IState;
struct __declspec(align(8)) DemoInGameState__Fields {
    struct IState* m_nextState;
    float m_elapsedTime;
    float m_idleTime;
    bool m_timedOut;
};
#endif
#if !defined(IL2CPP_STRUCT_DemoInGameState__Fields_FWDDECL)
#define IL2CPP_STRUCT_DemoInGameState__Fields_FWDDECL
#include <Modloader/app/structs/IState.h>
#endif
#undef IL2CPP_STRUCT_DemoInGameState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DemoInGameState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DemoInGameState__Fields_FWDDECL)
#include <Modloader/app/structs/DemoInGameState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DemoInGameState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
