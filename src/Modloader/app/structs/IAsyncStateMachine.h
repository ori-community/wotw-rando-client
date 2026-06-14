#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IAsyncStateMachine_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IAsyncStateMachine_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAsyncStateMachine_DEFINED)
#define IL2CPP_STRUCT_IAsyncStateMachine_DEFINED
struct IAsyncStateMachine__Class;
struct IAsyncStateMachine {
    struct IAsyncStateMachine__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IAsyncStateMachine_FWDDECL)
#define IL2CPP_STRUCT_IAsyncStateMachine_FWDDECL
#include <Modloader/app/structs/IAsyncStateMachine__Class.h>
#endif
#undef IL2CPP_STRUCT_IAsyncStateMachine_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAsyncStateMachine_DEFINED) && !defined(IL2CPP_STRUCT_IAsyncStateMachine_FWDDECL)
#include <Modloader/app/structs/IAsyncStateMachine.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IAsyncStateMachine.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
