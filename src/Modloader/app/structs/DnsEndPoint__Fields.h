#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DnsEndPoint__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DnsEndPoint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DnsEndPoint__Fields_DEFINED)
#include <Modloader/app/structs/AddressFamily__Enum.h>
#if defined(IL2CPP_STRUCT_AddressFamily__Enum_DEFINED)
#define IL2CPP_STRUCT_DnsEndPoint__Fields_DEFINED
struct String;
struct __declspec(align(8)) DnsEndPoint__Fields {
    struct String* m_Host;
    int32_t m_Port;
    AddressFamily__Enum m_Family;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DnsEndPoint__Fields_FWDDECL)
#define IL2CPP_STRUCT_DnsEndPoint__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DnsEndPoint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DnsEndPoint__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DnsEndPoint__Fields_FWDDECL)
#include <Modloader/app/structs/DnsEndPoint__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DnsEndPoint__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
