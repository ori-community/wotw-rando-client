#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncMethodBuilderCore_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncMethodBuilderCore_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncMethodBuilderCore_DEFINED)
#define IL2CPP_STRUCT_AsyncMethodBuilderCore_DEFINED
struct IAsyncStateMachine;
struct Action;
struct AsyncMethodBuilderCore {
    struct IAsyncStateMachine* m_stateMachine;
    struct Action* m_defaultContextAction;
};
#endif
#if !defined(IL2CPP_STRUCT_AsyncMethodBuilderCore_FWDDECL)
#define IL2CPP_STRUCT_AsyncMethodBuilderCore_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/IAsyncStateMachine.h>
#endif
#undef IL2CPP_STRUCT_AsyncMethodBuilderCore_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncMethodBuilderCore_DEFINED) && !defined(IL2CPP_STRUCT_AsyncMethodBuilderCore_FWDDECL)
#include <Modloader/app/structs/AsyncMethodBuilderCore.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncMethodBuilderCore.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
