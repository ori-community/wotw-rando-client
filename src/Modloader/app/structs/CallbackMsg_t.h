#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CallbackMsg_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CallbackMsg_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallbackMsg_t_DEFINED)
#define IL2CPP_STRUCT_CallbackMsg_t_DEFINED
struct CallbackMsg_t {
    int32_t m_hSteamUser;
    int32_t m_iCallback;
    void* m_pubParam;
    int32_t m_cubParam;
};
#endif
#if !defined(IL2CPP_STRUCT_CallbackMsg_t_FWDDECL)
#define IL2CPP_STRUCT_CallbackMsg_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_CallbackMsg_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallbackMsg_t_DEFINED) && !defined(IL2CPP_STRUCT_CallbackMsg_t_FWDDECL)
#include <Modloader/app/structs/CallbackMsg_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CallbackMsg_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
