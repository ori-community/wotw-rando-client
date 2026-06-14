#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Thread__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Thread__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Thread__Fields_DEFINED)
#define IL2CPP_STRUCT_Thread__Fields_DEFINED
struct InternalThread;
struct Object;
struct IPrincipal;
struct MulticastDelegate;
struct ExecutionContext;
struct __declspec(align(8)) Thread__Fields {
    struct InternalThread* internal_thread;
    struct Object* m_ThreadStartArg;
    struct Object* pending_exception;
    struct IPrincipal* principal;
    int32_t principal_version;
    struct MulticastDelegate* m_Delegate;
    struct ExecutionContext* m_ExecutionContext;
    bool m_ExecutionContextBelongsToOuterScope;
};
#endif
#if !defined(IL2CPP_STRUCT_Thread__Fields_FWDDECL)
#define IL2CPP_STRUCT_Thread__Fields_FWDDECL
#include <Modloader/app/structs/ExecutionContext.h>
#include <Modloader/app/structs/IPrincipal.h>
#include <Modloader/app/structs/InternalThread.h>
#include <Modloader/app/structs/MulticastDelegate.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_Thread__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Thread__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Thread__Fields_FWDDECL)
#include <Modloader/app/structs/Thread__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Thread__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
