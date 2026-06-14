#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPEndPoint__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPEndPoint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPEndPoint__Fields_DEFINED)
#define IL2CPP_STRUCT_IPEndPoint__Fields_DEFINED
struct IPAddress;
struct __declspec(align(8)) IPEndPoint__Fields {
    struct IPAddress* m_Address;
    int32_t m_Port;
};
#endif
#if !defined(IL2CPP_STRUCT_IPEndPoint__Fields_FWDDECL)
#define IL2CPP_STRUCT_IPEndPoint__Fields_FWDDECL
#include <Modloader/app/structs/IPAddress.h>
#endif
#undef IL2CPP_STRUCT_IPEndPoint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPEndPoint__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IPEndPoint__Fields_FWDDECL)
#include <Modloader/app/structs/IPEndPoint__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPEndPoint__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
