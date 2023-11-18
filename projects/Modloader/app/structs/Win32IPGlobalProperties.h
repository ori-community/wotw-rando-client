#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Win32IPGlobalProperties_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Win32IPGlobalProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_Win32IPGlobalProperties_DEFINED)
#define IL2CPP_STRUCT_Win32IPGlobalProperties_DEFINED
struct Win32IPGlobalProperties__Class;
struct Win32IPGlobalProperties {
    struct Win32IPGlobalProperties__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Win32IPGlobalProperties_FWDDECL)
#define IL2CPP_STRUCT_Win32IPGlobalProperties_FWDDECL
#include <Modloader/app/structs/Win32IPGlobalProperties__Class.h>
#endif
#undef IL2CPP_STRUCT_Win32IPGlobalProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_Win32IPGlobalProperties_DEFINED) && !defined(IL2CPP_STRUCT_Win32IPGlobalProperties_FWDDECL)
#include <Modloader/app/structs/Win32IPGlobalProperties.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Win32IPGlobalProperties.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
