#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PersonaStateChange_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PersonaStateChange_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_PersonaStateChange_t_DEFINED)
#include <Modloader/app/structs/EPersonaChange__Enum.h>
#if defined(IL2CPP_STRUCT_EPersonaChange__Enum_DEFINED)
#define IL2CPP_STRUCT_PersonaStateChange_t_DEFINED
struct PersonaStateChange_t {
    uint64_t m_ulSteamID;
    EPersonaChange__Enum m_nChangeFlags;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PersonaStateChange_t_FWDDECL)
#define IL2CPP_STRUCT_PersonaStateChange_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_PersonaStateChange_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_PersonaStateChange_t_DEFINED) && !defined(IL2CPP_STRUCT_PersonaStateChange_t_FWDDECL)
#include <Modloader/app/structs/PersonaStateChange_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PersonaStateChange_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
