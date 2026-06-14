#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaapiStopAllArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaapiStopAllArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaapiStopAllArgs_DEFINED)
#include <Modloader/app/structs/WaapiStopAllArgs__Fields.h>
#if defined(IL2CPP_STRUCT_WaapiStopAllArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_WaapiStopAllArgs_DEFINED
struct WaapiStopAllArgs__Class;
struct WaapiStopAllArgs {
    struct WaapiStopAllArgs__Class* klass;
    MonitorData* monitor;
    struct WaapiStopAllArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaapiStopAllArgs_FWDDECL)
#define IL2CPP_STRUCT_WaapiStopAllArgs_FWDDECL
#include <Modloader/app/structs/WaapiStopAllArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_WaapiStopAllArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaapiStopAllArgs_DEFINED) && !defined(IL2CPP_STRUCT_WaapiStopAllArgs_FWDDECL)
#include <Modloader/app/structs/WaapiStopAllArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaapiStopAllArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
