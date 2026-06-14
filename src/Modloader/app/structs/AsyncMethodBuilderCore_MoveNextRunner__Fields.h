#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncMethodBuilderCore_MoveNextRunner__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncMethodBuilderCore_MoveNextRunner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncMethodBuilderCore_MoveNextRunner__Fields_DEFINED)
#define IL2CPP_STRUCT_AsyncMethodBuilderCore_MoveNextRunner__Fields_DEFINED
struct ExecutionContext;
struct IAsyncStateMachine;
struct __declspec(align(8)) AsyncMethodBuilderCore_MoveNextRunner__Fields {
    struct ExecutionContext* m_context;
    struct IAsyncStateMachine* m_stateMachine;
};
#endif
#if !defined(IL2CPP_STRUCT_AsyncMethodBuilderCore_MoveNextRunner__Fields_FWDDECL)
#define IL2CPP_STRUCT_AsyncMethodBuilderCore_MoveNextRunner__Fields_FWDDECL
#include <Modloader/app/structs/ExecutionContext.h>
#include <Modloader/app/structs/IAsyncStateMachine.h>
#endif
#undef IL2CPP_STRUCT_AsyncMethodBuilderCore_MoveNextRunner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncMethodBuilderCore_MoveNextRunner__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AsyncMethodBuilderCore_MoveNextRunner__Fields_FWDDECL)
#include <Modloader/app/structs/AsyncMethodBuilderCore_MoveNextRunner__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncMethodBuilderCore_MoveNextRunner__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
