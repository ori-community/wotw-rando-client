#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CancellationTokenSource__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CancellationTokenSource__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CancellationTokenSource__StaticFields_DEFINED)
#define IL2CPP_STRUCT_CancellationTokenSource__StaticFields_DEFINED
struct CancellationTokenSource;
struct Action_1_Object_;
struct TimerCallback;
struct CancellationTokenSource__StaticFields {
    struct CancellationTokenSource* _staticSource_Set;
    struct CancellationTokenSource* _staticSource_NotCancelable;
    int32_t s_nLists;
    struct Action_1_Object_* s_LinkedTokenCancelDelegate;
    struct TimerCallback* s_timerCallback;
};
#endif
#if !defined(IL2CPP_STRUCT_CancellationTokenSource__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_CancellationTokenSource__StaticFields_FWDDECL
#include <Modloader/app/structs/Action_1_Object_.h>
#include <Modloader/app/structs/CancellationTokenSource.h>
#include <Modloader/app/structs/TimerCallback.h>
#endif
#undef IL2CPP_STRUCT_CancellationTokenSource__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CancellationTokenSource__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_CancellationTokenSource__StaticFields_FWDDECL)
#include <Modloader/app/structs/CancellationTokenSource__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CancellationTokenSource__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
