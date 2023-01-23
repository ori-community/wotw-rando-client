#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaapiConnectProfilerArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaapiConnectProfilerArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaapiConnectProfilerArgs_DEFINED)
#include <Modloader/app/structs/WaapiConnectProfilerArgs__Fields.h>
#if defined(IL2CPP_STRUCT_WaapiConnectProfilerArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_WaapiConnectProfilerArgs_DEFINED
struct WaapiConnectProfilerArgs__Class;
struct WaapiConnectProfilerArgs {
    struct WaapiConnectProfilerArgs__Class* klass;
    MonitorData* monitor;
    struct WaapiConnectProfilerArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaapiConnectProfilerArgs_FWDDECL)
#define IL2CPP_STRUCT_WaapiConnectProfilerArgs_FWDDECL
#include <Modloader/app/structs/WaapiConnectProfilerArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_WaapiConnectProfilerArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaapiConnectProfilerArgs_DEFINED) && !defined(IL2CPP_STRUCT_WaapiConnectProfilerArgs_FWDDECL)
#include <Modloader/app/structs/WaapiConnectProfilerArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaapiConnectProfilerArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
