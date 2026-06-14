#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Win32_IP_ADDR_STRING_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Win32_IP_ADDR_STRING_INITIALIZING
#if !defined(IL2CPP_STRUCT_Win32_IP_ADDR_STRING_DEFINED)
#define IL2CPP_STRUCT_Win32_IP_ADDR_STRING_DEFINED
struct String;
struct Win32_IP_ADDR_STRING {
    void* Next;
    struct String* IpAddress;
    struct String* IpMask;
    uint32_t Context;
};
#endif
#if !defined(IL2CPP_STRUCT_Win32_IP_ADDR_STRING_FWDDECL)
#define IL2CPP_STRUCT_Win32_IP_ADDR_STRING_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Win32_IP_ADDR_STRING_INITIALIZING
#if !defined(IL2CPP_STRUCT_Win32_IP_ADDR_STRING_DEFINED) && !defined(IL2CPP_STRUCT_Win32_IP_ADDR_STRING_FWDDECL)
#include <Modloader/app/structs/Win32_IP_ADDR_STRING.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Win32_IP_ADDR_STRING.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
