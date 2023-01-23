#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_hostent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_hostent_INITIALIZING
#if !defined(IL2CPP_STRUCT_hostent_DEFINED)
#define IL2CPP_STRUCT_hostent_DEFINED
struct hostent {
    void* h_name;
    void* h_aliases;
    int16_t h_addrtype;
    int16_t h_length;
    void* h_addr_list;
};
#endif
#if !defined(IL2CPP_STRUCT_hostent_FWDDECL)
#define IL2CPP_STRUCT_hostent_FWDDECL
#endif
#undef IL2CPP_STRUCT_hostent_INITIALIZING
#if !defined(IL2CPP_STRUCT_hostent_DEFINED) && !defined(IL2CPP_STRUCT_hostent_FWDDECL)
#include <Modloader/app/structs/hostent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/hostent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
