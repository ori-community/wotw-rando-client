#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AVProWindowsMediaPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AVProWindowsMediaPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_AVProWindowsMediaPlugin_DEFINED)
#define IL2CPP_STRUCT_AVProWindowsMediaPlugin_DEFINED
struct AVProWindowsMediaPlugin__Class;
struct AVProWindowsMediaPlugin {
    struct AVProWindowsMediaPlugin__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AVProWindowsMediaPlugin_FWDDECL)
#define IL2CPP_STRUCT_AVProWindowsMediaPlugin_FWDDECL
#include <Modloader/app/structs/AVProWindowsMediaPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_AVProWindowsMediaPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_AVProWindowsMediaPlugin_DEFINED) && !defined(IL2CPP_STRUCT_AVProWindowsMediaPlugin_FWDDECL)
#include <Modloader/app/structs/AVProWindowsMediaPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AVProWindowsMediaPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
