#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventProvider__Fields_DEFINED)
#include <Modloader/app/structs/GCHandle.h>
#include <Modloader/app/structs/Guid.h>
#if defined(IL2CPP_STRUCT_GCHandle_DEFINED) && defined(IL2CPP_STRUCT_Guid_DEFINED)
#define IL2CPP_STRUCT_EventProvider__Fields_DEFINED
struct UnsafeNativeMethods_ManifestEtw_EtwEnableCallback;
struct List_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_;
struct __declspec(align(8)) EventProvider__Fields {
    struct UnsafeNativeMethods_ManifestEtw_EtwEnableCallback* m_etwCallback;
    struct GCHandle m_thisGCHandle;
    int64_t m_regHandle;
    uint8_t m_level;
    int64_t m_anyKeywordMask;
    int64_t m_allKeywordMask;
    struct List_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_* m_liveSessions;
    bool m_enabled;
    struct Guid m_providerId;
    bool m_disposed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_EventProvider__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_.h>
#include <Modloader/app/structs/UnsafeNativeMethods_ManifestEtw_EtwEnableCallback.h>
#endif
#undef IL2CPP_STRUCT_EventProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EventProvider__Fields_FWDDECL)
#include <Modloader/app/structs/EventProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
