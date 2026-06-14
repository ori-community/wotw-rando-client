#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MiscDebugMenuPage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MiscDebugMenuPage_INITIALIZING
#if !defined(IL2CPP_STRUCT_MiscDebugMenuPage_DEFINED)
#include <Modloader/app/structs/MiscDebugMenuPage__Fields.h>
#if defined(IL2CPP_STRUCT_MiscDebugMenuPage__Fields_DEFINED)
#define IL2CPP_STRUCT_MiscDebugMenuPage_DEFINED
struct MiscDebugMenuPage__Class;
struct MiscDebugMenuPage {
    struct MiscDebugMenuPage__Class* klass;
    MonitorData* monitor;
    struct MiscDebugMenuPage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MiscDebugMenuPage_FWDDECL)
#define IL2CPP_STRUCT_MiscDebugMenuPage_FWDDECL
#include <Modloader/app/structs/MiscDebugMenuPage__Class.h>
#endif
#undef IL2CPP_STRUCT_MiscDebugMenuPage_INITIALIZING
#if !defined(IL2CPP_STRUCT_MiscDebugMenuPage_DEFINED) && !defined(IL2CPP_STRUCT_MiscDebugMenuPage_FWDDECL)
#include <Modloader/app/structs/MiscDebugMenuPage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MiscDebugMenuPage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
