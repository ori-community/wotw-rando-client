#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncMethodBuilderCore_ContinuationWrapper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncMethodBuilderCore_ContinuationWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncMethodBuilderCore_ContinuationWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_AsyncMethodBuilderCore_ContinuationWrapper__Fields_DEFINED
struct Action;
struct Task;
struct __declspec(align(8)) AsyncMethodBuilderCore_ContinuationWrapper__Fields {
    struct Action* m_continuation;
    struct Action* m_invokeAction;
    struct Task* m_innerTask;
};
#endif
#if !defined(IL2CPP_STRUCT_AsyncMethodBuilderCore_ContinuationWrapper__Fields_FWDDECL)
#define IL2CPP_STRUCT_AsyncMethodBuilderCore_ContinuationWrapper__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Task.h>
#endif
#undef IL2CPP_STRUCT_AsyncMethodBuilderCore_ContinuationWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncMethodBuilderCore_ContinuationWrapper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AsyncMethodBuilderCore_ContinuationWrapper__Fields_FWDDECL)
#include <Modloader/app/structs/AsyncMethodBuilderCore_ContinuationWrapper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncMethodBuilderCore_ContinuationWrapper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
