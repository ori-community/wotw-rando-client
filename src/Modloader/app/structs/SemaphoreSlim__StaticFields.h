#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SemaphoreSlim__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SemaphoreSlim__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SemaphoreSlim__StaticFields_DEFINED)
#define IL2CPP_STRUCT_SemaphoreSlim__StaticFields_DEFINED
struct Task_1_System_Boolean_;
struct Action_1_Object_;
struct SemaphoreSlim__StaticFields {
    struct Task_1_System_Boolean_* s_trueTask;
    struct Action_1_Object_* s_cancellationTokenCanceledEventHandler;
};
#endif
#if !defined(IL2CPP_STRUCT_SemaphoreSlim__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SemaphoreSlim__StaticFields_FWDDECL
#include <Modloader/app/structs/Action_1_Object_.h>
#include <Modloader/app/structs/Task_1_System_Boolean_.h>
#endif
#undef IL2CPP_STRUCT_SemaphoreSlim__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SemaphoreSlim__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SemaphoreSlim__StaticFields_FWDDECL)
#include <Modloader/app/structs/SemaphoreSlim__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SemaphoreSlim__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
