#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SubmitPlayerResultResultCallback_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SubmitPlayerResultResultCallback_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_SubmitPlayerResultResultCallback_t_DEFINED)
#include <Modloader/app/structs/CSteamID.h>
#include <Modloader/app/structs/EResult__Enum.h>
#if defined(IL2CPP_STRUCT_EResult__Enum_DEFINED) && defined(IL2CPP_STRUCT_CSteamID_DEFINED)
#define IL2CPP_STRUCT_SubmitPlayerResultResultCallback_t_DEFINED
struct SubmitPlayerResultResultCallback_t {
    EResult__Enum m_eResult;

    uint64_t ullUniqueGameID;
    struct CSteamID steamIDPlayer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SubmitPlayerResultResultCallback_t_FWDDECL)
#define IL2CPP_STRUCT_SubmitPlayerResultResultCallback_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_SubmitPlayerResultResultCallback_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_SubmitPlayerResultResultCallback_t_DEFINED) && !defined(IL2CPP_STRUCT_SubmitPlayerResultResultCallback_t_FWDDECL)
#include <Modloader/app/structs/SubmitPlayerResultResultCallback_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SubmitPlayerResultResultCallback_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
