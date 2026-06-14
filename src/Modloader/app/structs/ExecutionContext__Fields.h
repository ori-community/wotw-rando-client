#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExecutionContext__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExecutionContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecutionContext__Fields_DEFINED)
#include <Modloader/app/structs/ExecutionContext_Flags__Enum.h>
#if defined(IL2CPP_STRUCT_ExecutionContext_Flags__Enum_DEFINED)
#define IL2CPP_STRUCT_ExecutionContext__Fields_DEFINED
struct SynchronizationContext;
struct LogicalCallContext;
struct IllogicalCallContext;
struct Dictionary_2_System_Threading_IAsyncLocal_System_Object_;
struct List_1_System_Threading_IAsyncLocal_;
struct __declspec(align(8)) ExecutionContext__Fields {
    struct SynchronizationContext* _syncContext;
    struct SynchronizationContext* _syncContextNoFlow;
    struct LogicalCallContext* _logicalCallContext;
    struct IllogicalCallContext* _illogicalCallContext;
    ExecutionContext_Flags__Enum _flags;

    struct Dictionary_2_System_Threading_IAsyncLocal_System_Object_* _localValues;
    struct List_1_System_Threading_IAsyncLocal_* _localChangeNotifications;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExecutionContext__Fields_FWDDECL)
#define IL2CPP_STRUCT_ExecutionContext__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Threading_IAsyncLocal_System_Object_.h>
#include <Modloader/app/structs/IllogicalCallContext.h>
#include <Modloader/app/structs/List_1_System_Threading_IAsyncLocal_.h>
#include <Modloader/app/structs/LogicalCallContext.h>
#include <Modloader/app/structs/SynchronizationContext.h>
#endif
#undef IL2CPP_STRUCT_ExecutionContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecutionContext__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ExecutionContext__Fields_FWDDECL)
#include <Modloader/app/structs/ExecutionContext__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExecutionContext__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
