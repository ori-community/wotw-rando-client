#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnitySynchronizationContext_WorkRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnitySynchronizationContext_WorkRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnitySynchronizationContext_WorkRequest_DEFINED)
#define IL2CPP_STRUCT_UnitySynchronizationContext_WorkRequest_DEFINED
struct SendOrPostCallback;
struct Object;
struct ManualResetEvent;
struct UnitySynchronizationContext_WorkRequest {
    struct SendOrPostCallback* m_DelagateCallback;
    struct Object* m_DelagateState;
    struct ManualResetEvent* m_WaitHandle;
};
#endif
#if !defined(IL2CPP_STRUCT_UnitySynchronizationContext_WorkRequest_FWDDECL)
#define IL2CPP_STRUCT_UnitySynchronizationContext_WorkRequest_FWDDECL
#include <Modloader/app/structs/ManualResetEvent.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SendOrPostCallback.h>
#endif
#undef IL2CPP_STRUCT_UnitySynchronizationContext_WorkRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnitySynchronizationContext_WorkRequest_DEFINED) && !defined(IL2CPP_STRUCT_UnitySynchronizationContext_WorkRequest_FWDDECL)
#include <Modloader/app/structs/UnitySynchronizationContext_WorkRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnitySynchronizationContext_WorkRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
