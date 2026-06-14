#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HTTPRequestDataReceived_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HTTPRequestDataReceived_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_HTTPRequestDataReceived_t_DEFINED)
#include <Modloader/app/structs/HTTPRequestHandle.h>
#if defined(IL2CPP_STRUCT_HTTPRequestHandle_DEFINED)
#define IL2CPP_STRUCT_HTTPRequestDataReceived_t_DEFINED
struct HTTPRequestDataReceived_t {
    struct HTTPRequestHandle m_hRequest;
    uint64_t m_ulContextValue;
    uint32_t m_cOffset;
    uint32_t m_cBytesReceived;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HTTPRequestDataReceived_t_FWDDECL)
#define IL2CPP_STRUCT_HTTPRequestDataReceived_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_HTTPRequestDataReceived_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_HTTPRequestDataReceived_t_DEFINED) && !defined(IL2CPP_STRUCT_HTTPRequestDataReceived_t_FWDDECL)
#include <Modloader/app/structs/HTTPRequestDataReceived_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HTTPRequestDataReceived_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
