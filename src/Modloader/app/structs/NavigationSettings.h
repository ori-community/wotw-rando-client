#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NavigationSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NavigationSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_NavigationSettings_DEFINED)
#define IL2CPP_STRUCT_NavigationSettings_DEFINED
struct NavigationSettings__Class;
struct NavigationSettings {
    struct NavigationSettings__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NavigationSettings_FWDDECL)
#define IL2CPP_STRUCT_NavigationSettings_FWDDECL
#include <Modloader/app/structs/NavigationSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_NavigationSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_NavigationSettings_DEFINED) && !defined(IL2CPP_STRUCT_NavigationSettings_FWDDECL)
#include <Modloader/app/structs/NavigationSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NavigationSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
