#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnitySynchronizationContext__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnitySynchronizationContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnitySynchronizationContext__Fields_DEFINED)
#include <Modloader/app/structs/SynchronizationContext__Fields.h>
#if defined(IL2CPP_STRUCT_SynchronizationContext__Fields_DEFINED)
#define IL2CPP_STRUCT_UnitySynchronizationContext__Fields_DEFINED
struct List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_;
struct UnitySynchronizationContext__Fields {
    struct SynchronizationContext__Fields _;
    struct List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_* m_AsyncWorkQueue;
    struct List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_* m_CurrentFrameWork;
    int32_t m_MainThreadID;
    int32_t m_TrackedCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnitySynchronizationContext__Fields_FWDDECL)
#define IL2CPP_STRUCT_UnitySynchronizationContext__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_.h>
#endif
#undef IL2CPP_STRUCT_UnitySynchronizationContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnitySynchronizationContext__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UnitySynchronizationContext__Fields_FWDDECL)
#include <Modloader/app/structs/UnitySynchronizationContext__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnitySynchronizationContext__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
