#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HTTPRequestCompleted_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HTTPRequestCompleted_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_HTTPRequestCompleted_t_DEFINED)
#include <Modloader/app/structs/EHTTPStatusCode__Enum.h>
#include <Modloader/app/structs/HTTPRequestHandle.h>
#if defined(IL2CPP_STRUCT_HTTPRequestHandle_DEFINED) && defined(IL2CPP_STRUCT_EHTTPStatusCode__Enum_DEFINED)
#define IL2CPP_STRUCT_HTTPRequestCompleted_t_DEFINED
struct HTTPRequestCompleted_t {
    struct HTTPRequestHandle m_hRequest;
    uint64_t m_ulContextValue;
    bool m_bRequestSuccessful;
    EHTTPStatusCode__Enum m_eStatusCode;

    uint32_t m_unBodySize;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HTTPRequestCompleted_t_FWDDECL)
#define IL2CPP_STRUCT_HTTPRequestCompleted_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_HTTPRequestCompleted_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_HTTPRequestCompleted_t_DEFINED) && !defined(IL2CPP_STRUCT_HTTPRequestCompleted_t_FWDDECL)
#include <Modloader/app/structs/HTTPRequestCompleted_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HTTPRequestCompleted_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
