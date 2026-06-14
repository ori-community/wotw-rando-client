#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDebugMenuPage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDebugMenuPage_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDebugMenuPage_DEFINED)
#define IL2CPP_STRUCT_IDebugMenuPage_DEFINED
struct IDebugMenuPage__Class;
struct IDebugMenuPage {
    struct IDebugMenuPage__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDebugMenuPage_FWDDECL)
#define IL2CPP_STRUCT_IDebugMenuPage_FWDDECL
#include <Modloader/app/structs/IDebugMenuPage__Class.h>
#endif
#undef IL2CPP_STRUCT_IDebugMenuPage_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDebugMenuPage_DEFINED) && !defined(IL2CPP_STRUCT_IDebugMenuPage_FWDDECL)
#include <Modloader/app/structs/IDebugMenuPage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDebugMenuPage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
