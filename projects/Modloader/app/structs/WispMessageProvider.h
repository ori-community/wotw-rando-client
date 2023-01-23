#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WispMessageProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WispMessageProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_WispMessageProvider_DEFINED)
#include <Modloader/app/structs/WispMessageProvider__Fields.h>
#if defined(IL2CPP_STRUCT_WispMessageProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_WispMessageProvider_DEFINED
struct WispMessageProvider__Class;
struct WispMessageProvider {
    struct WispMessageProvider__Class* klass;
    MonitorData* monitor;
    struct WispMessageProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WispMessageProvider_FWDDECL)
#define IL2CPP_STRUCT_WispMessageProvider_FWDDECL
#include <Modloader/app/structs/WispMessageProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_WispMessageProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_WispMessageProvider_DEFINED) && !defined(IL2CPP_STRUCT_WispMessageProvider_FWDDECL)
#include <Modloader/app/structs/WispMessageProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WispMessageProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
