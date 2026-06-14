#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkCommonCommSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkCommonCommSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCommonCommSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AkCommonCommSettings__Fields_DEFINED
struct String;
struct __declspec(align(8)) AkCommonCommSettings__Fields {
    uint32_t m_PoolSize;
    uint16_t m_DiscoveryBroadcastPort;
    uint16_t m_CommandPort;
    uint16_t m_NotificationPort;
    bool m_InitializeSystemComms;
    struct String* m_NetworkName;
};
#endif
#if !defined(IL2CPP_STRUCT_AkCommonCommSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_AkCommonCommSettings__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_AkCommonCommSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCommonCommSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AkCommonCommSettings__Fields_FWDDECL)
#include <Modloader/app/structs/AkCommonCommSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkCommonCommSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
