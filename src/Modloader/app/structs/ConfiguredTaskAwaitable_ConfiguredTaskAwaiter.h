#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_DEFINED)
#define IL2CPP_STRUCT_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_DEFINED
struct Task;
struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter {
    struct Task* m_task;
    bool m_continueOnCapturedContext;
};
#endif
#if !defined(IL2CPP_STRUCT_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_FWDDECL)
#define IL2CPP_STRUCT_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_FWDDECL
#include <Modloader/app/structs/Task.h>
#endif
#undef IL2CPP_STRUCT_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_DEFINED) && !defined(IL2CPP_STRUCT_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_FWDDECL)
#include <Modloader/app/structs/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
