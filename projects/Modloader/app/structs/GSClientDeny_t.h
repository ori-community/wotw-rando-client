#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GSClientDeny_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GSClientDeny_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_GSClientDeny_t_DEFINED)
#include <Modloader/app/structs/CSteamID.h>
#include <Modloader/app/structs/EDenyReason__Enum.h>
#if defined(IL2CPP_STRUCT_CSteamID_DEFINED) && defined(IL2CPP_STRUCT_EDenyReason__Enum_DEFINED)
#define IL2CPP_STRUCT_GSClientDeny_t_DEFINED
struct String;
struct GSClientDeny_t {
    struct CSteamID m_SteamID;
    EDenyReason__Enum m_eDenyReason;

    struct String* m_rgchOptionalText;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GSClientDeny_t_FWDDECL)
#define IL2CPP_STRUCT_GSClientDeny_t_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GSClientDeny_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_GSClientDeny_t_DEFINED) && !defined(IL2CPP_STRUCT_GSClientDeny_t_FWDDECL)
#include <Modloader/app/structs/GSClientDeny_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GSClientDeny_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
