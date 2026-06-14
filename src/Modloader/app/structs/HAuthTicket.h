#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HAuthTicket_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HAuthTicket_INITIALIZING
#if !defined(IL2CPP_STRUCT_HAuthTicket_DEFINED)
#define IL2CPP_STRUCT_HAuthTicket_DEFINED
struct HAuthTicket {
    uint32_t m_HAuthTicket;
};
#endif
#if !defined(IL2CPP_STRUCT_HAuthTicket_FWDDECL)
#define IL2CPP_STRUCT_HAuthTicket_FWDDECL
#endif
#undef IL2CPP_STRUCT_HAuthTicket_INITIALIZING
#if !defined(IL2CPP_STRUCT_HAuthTicket_DEFINED) && !defined(IL2CPP_STRUCT_HAuthTicket_FWDDECL)
#include <Modloader/app/structs/HAuthTicket.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HAuthTicket.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
