#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Win32IPGlobalProperties_Win32_MIB_TCPROW__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Win32IPGlobalProperties_Win32_MIB_TCPROW__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Win32IPGlobalProperties_Win32_MIB_TCPROW__Fields_DEFINED)
#include <Modloader/app/structs/TcpState__Enum.h>
#if defined(IL2CPP_STRUCT_TcpState__Enum_DEFINED)
#define IL2CPP_STRUCT_Win32IPGlobalProperties_Win32_MIB_TCPROW__Fields_DEFINED
struct __declspec(align(8)) Win32IPGlobalProperties_Win32_MIB_TCPROW__Fields {
    TcpState__Enum State;

    uint32_t LocalAddr;
    uint32_t LocalPort;
    uint32_t RemoteAddr;
    uint32_t RemotePort;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Win32IPGlobalProperties_Win32_MIB_TCPROW__Fields_FWDDECL)
#define IL2CPP_STRUCT_Win32IPGlobalProperties_Win32_MIB_TCPROW__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_Win32IPGlobalProperties_Win32_MIB_TCPROW__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Win32IPGlobalProperties_Win32_MIB_TCPROW__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Win32IPGlobalProperties_Win32_MIB_TCPROW__Fields_FWDDECL)
#include <Modloader/app/structs/Win32IPGlobalProperties_Win32_MIB_TCPROW__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Win32IPGlobalProperties_Win32_MIB_TCPROW__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
