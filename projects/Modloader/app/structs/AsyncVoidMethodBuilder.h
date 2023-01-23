#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncVoidMethodBuilder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncVoidMethodBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncVoidMethodBuilder_DEFINED)
#include <Modloader/app/structs/AsyncMethodBuilderCore.h>
#if defined(IL2CPP_STRUCT_AsyncMethodBuilderCore_DEFINED)
#define IL2CPP_STRUCT_AsyncVoidMethodBuilder_DEFINED
struct SynchronizationContext;
struct Task;
struct AsyncVoidMethodBuilder {
    struct SynchronizationContext* m_synchronizationContext;
    struct AsyncMethodBuilderCore m_coreState;
    struct Task* m_task;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AsyncVoidMethodBuilder_FWDDECL)
#define IL2CPP_STRUCT_AsyncVoidMethodBuilder_FWDDECL
#include <Modloader/app/structs/SynchronizationContext.h>
#include <Modloader/app/structs/Task.h>
#endif
#undef IL2CPP_STRUCT_AsyncVoidMethodBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncVoidMethodBuilder_DEFINED) && !defined(IL2CPP_STRUCT_AsyncVoidMethodBuilder_FWDDECL)
#include <Modloader/app/structs/AsyncVoidMethodBuilder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncVoidMethodBuilder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
