#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnalyticsBridge_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnalyticsBridge_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnalyticsBridge_DEFINED)
#define IL2CPP_STRUCT_AnalyticsBridge_DEFINED
struct AnalyticsBridge__Class;
struct AnalyticsBridge {
    struct AnalyticsBridge__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AnalyticsBridge_FWDDECL)
#define IL2CPP_STRUCT_AnalyticsBridge_FWDDECL
#include <Modloader/app/structs/AnalyticsBridge__Class.h>
#endif
#undef IL2CPP_STRUCT_AnalyticsBridge_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnalyticsBridge_DEFINED) && !defined(IL2CPP_STRUCT_AnalyticsBridge_FWDDECL)
#include <Modloader/app/structs/AnalyticsBridge.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnalyticsBridge.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
