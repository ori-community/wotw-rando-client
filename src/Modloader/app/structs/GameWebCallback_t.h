#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameWebCallback_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameWebCallback_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameWebCallback_t_DEFINED)
#define IL2CPP_STRUCT_GameWebCallback_t_DEFINED
struct String;
struct GameWebCallback_t {
    struct String* m_szURL;
};
#endif
#if !defined(IL2CPP_STRUCT_GameWebCallback_t_FWDDECL)
#define IL2CPP_STRUCT_GameWebCallback_t_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GameWebCallback_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameWebCallback_t_DEFINED) && !defined(IL2CPP_STRUCT_GameWebCallback_t_FWDDECL)
#include <Modloader/app/structs/GameWebCallback_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameWebCallback_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
