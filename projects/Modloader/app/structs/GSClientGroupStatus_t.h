#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GSClientGroupStatus_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GSClientGroupStatus_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_GSClientGroupStatus_t_DEFINED)
#include <Modloader/app/structs/CSteamID.h>
#if defined(IL2CPP_STRUCT_CSteamID_DEFINED)
#define IL2CPP_STRUCT_GSClientGroupStatus_t_DEFINED
struct GSClientGroupStatus_t {
    struct CSteamID m_SteamIDUser;
    struct CSteamID m_SteamIDGroup;
    bool m_bMember;
    bool m_bOfficer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GSClientGroupStatus_t_FWDDECL)
#define IL2CPP_STRUCT_GSClientGroupStatus_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_GSClientGroupStatus_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_GSClientGroupStatus_t_DEFINED) && !defined(IL2CPP_STRUCT_GSClientGroupStatus_t_FWDDECL)
#include <Modloader/app/structs/GSClientGroupStatus_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GSClientGroupStatus_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
