#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Win32_FIXED_INFO_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Win32_FIXED_INFO_INITIALIZING
#if !defined(IL2CPP_STRUCT_Win32_FIXED_INFO_DEFINED)
#include <Modloader/app/structs/NetBiosNodeType__Enum.h>
#include <Modloader/app/structs/Win32_IP_ADDR_STRING.h>
#if defined(IL2CPP_STRUCT_Win32_IP_ADDR_STRING_DEFINED) && defined(IL2CPP_STRUCT_NetBiosNodeType__Enum_DEFINED)
#define IL2CPP_STRUCT_Win32_FIXED_INFO_DEFINED
struct String;
struct Win32_FIXED_INFO {
    struct String* HostName;
    struct String* DomainName;
    void* CurrentDnsServer;
    struct Win32_IP_ADDR_STRING DnsServerList;
    NetBiosNodeType__Enum NodeType;

    struct String* ScopeId;
    uint32_t EnableRouting;
    uint32_t EnableProxy;
    uint32_t EnableDns;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Win32_FIXED_INFO_FWDDECL)
#define IL2CPP_STRUCT_Win32_FIXED_INFO_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Win32_FIXED_INFO_INITIALIZING
#if !defined(IL2CPP_STRUCT_Win32_FIXED_INFO_DEFINED) && !defined(IL2CPP_STRUCT_Win32_FIXED_INFO_FWDDECL)
#include <Modloader/app/structs/Win32_FIXED_INFO.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Win32_FIXED_INFO.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
