#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CGameID_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CGameID_INITIALIZING
#if !defined(IL2CPP_STRUCT_CGameID_DEFINED)
#define IL2CPP_STRUCT_CGameID_DEFINED
struct CGameID {
    uint64_t m_GameID;
};
#endif
#if !defined(IL2CPP_STRUCT_CGameID_FWDDECL)
#define IL2CPP_STRUCT_CGameID_FWDDECL
#endif
#undef IL2CPP_STRUCT_CGameID_INITIALIZING
#if !defined(IL2CPP_STRUCT_CGameID_DEFINED) && !defined(IL2CPP_STRUCT_CGameID_FWDDECL)
#include <Modloader/app/structs/CGameID.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CGameID.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
