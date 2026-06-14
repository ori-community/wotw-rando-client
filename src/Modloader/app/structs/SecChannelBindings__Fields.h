#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SecChannelBindings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SecChannelBindings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecChannelBindings__Fields_DEFINED)
#define IL2CPP_STRUCT_SecChannelBindings__Fields_DEFINED
struct __declspec(align(8)) SecChannelBindings__Fields {
    int32_t dwInitiatorAddrType;
    int32_t cbInitiatorLength;
    int32_t dwInitiatorOffset;
    int32_t dwAcceptorAddrType;
    int32_t cbAcceptorLength;
    int32_t dwAcceptorOffset;
    int32_t cbApplicationDataLength;
    int32_t dwApplicationDataOffset;
};
#endif
#if !defined(IL2CPP_STRUCT_SecChannelBindings__Fields_FWDDECL)
#define IL2CPP_STRUCT_SecChannelBindings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SecChannelBindings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecChannelBindings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SecChannelBindings__Fields_FWDDECL)
#include <Modloader/app/structs/SecChannelBindings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SecChannelBindings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
