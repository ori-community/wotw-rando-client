#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SynchronizationContextAwaitTaskContinuation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SynchronizationContextAwaitTaskContinuation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SynchronizationContextAwaitTaskContinuation__Fields_DEFINED)
#include <Modloader/app/structs/AwaitTaskContinuation__Fields.h>
#if defined(IL2CPP_STRUCT_AwaitTaskContinuation__Fields_DEFINED)
#define IL2CPP_STRUCT_SynchronizationContextAwaitTaskContinuation__Fields_DEFINED
struct SynchronizationContext;
struct SynchronizationContextAwaitTaskContinuation__Fields {
    struct AwaitTaskContinuation__Fields _;
    struct SynchronizationContext* m_syncContext;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SynchronizationContextAwaitTaskContinuation__Fields_FWDDECL)
#define IL2CPP_STRUCT_SynchronizationContextAwaitTaskContinuation__Fields_FWDDECL
#include <Modloader/app/structs/SynchronizationContext.h>
#endif
#undef IL2CPP_STRUCT_SynchronizationContextAwaitTaskContinuation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SynchronizationContextAwaitTaskContinuation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SynchronizationContextAwaitTaskContinuation__Fields_FWDDECL)
#include <Modloader/app/structs/SynchronizationContextAwaitTaskContinuation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SynchronizationContextAwaitTaskContinuation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
