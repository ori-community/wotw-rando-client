#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnalyticsSessionInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnalyticsSessionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnalyticsSessionInfo_DEFINED)
#define IL2CPP_STRUCT_AnalyticsSessionInfo_DEFINED
struct AnalyticsSessionInfo__Class;
struct AnalyticsSessionInfo {
    struct AnalyticsSessionInfo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AnalyticsSessionInfo_FWDDECL)
#define IL2CPP_STRUCT_AnalyticsSessionInfo_FWDDECL
#include <Modloader/app/structs/AnalyticsSessionInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_AnalyticsSessionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnalyticsSessionInfo_DEFINED) && !defined(IL2CPP_STRUCT_AnalyticsSessionInfo_FWDDECL)
#include <Modloader/app/structs/AnalyticsSessionInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnalyticsSessionInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
