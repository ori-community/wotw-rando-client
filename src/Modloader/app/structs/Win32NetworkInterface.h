#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Win32NetworkInterface_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Win32NetworkInterface_INITIALIZING
#if !defined(IL2CPP_STRUCT_Win32NetworkInterface_DEFINED)
#define IL2CPP_STRUCT_Win32NetworkInterface_DEFINED
struct Win32NetworkInterface__Class;
struct Win32NetworkInterface {
    struct Win32NetworkInterface__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Win32NetworkInterface_FWDDECL)
#define IL2CPP_STRUCT_Win32NetworkInterface_FWDDECL
#include <Modloader/app/structs/Win32NetworkInterface__Class.h>
#endif
#undef IL2CPP_STRUCT_Win32NetworkInterface_INITIALIZING
#if !defined(IL2CPP_STRUCT_Win32NetworkInterface_DEFINED) && !defined(IL2CPP_STRUCT_Win32NetworkInterface_FWDDECL)
#include <Modloader/app/structs/Win32NetworkInterface.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Win32NetworkInterface.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
