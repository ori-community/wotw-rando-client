#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SearchDebugMenuPage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SearchDebugMenuPage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SearchDebugMenuPage_DEFINED)
#include <Modloader/app/structs/SearchDebugMenuPage__Fields.h>
#if defined(IL2CPP_STRUCT_SearchDebugMenuPage__Fields_DEFINED)
#define IL2CPP_STRUCT_SearchDebugMenuPage_DEFINED
struct SearchDebugMenuPage__Class;
struct SearchDebugMenuPage {
    struct SearchDebugMenuPage__Class* klass;
    MonitorData* monitor;
    struct SearchDebugMenuPage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SearchDebugMenuPage_FWDDECL)
#define IL2CPP_STRUCT_SearchDebugMenuPage_FWDDECL
#include <Modloader/app/structs/SearchDebugMenuPage__Class.h>
#endif
#undef IL2CPP_STRUCT_SearchDebugMenuPage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SearchDebugMenuPage_DEFINED) && !defined(IL2CPP_STRUCT_SearchDebugMenuPage_FWDDECL)
#include <Modloader/app/structs/SearchDebugMenuPage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SearchDebugMenuPage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
