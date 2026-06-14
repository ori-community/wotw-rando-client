#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Uri_Offset_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Uri_Offset_INITIALIZING
#if !defined(IL2CPP_STRUCT_Uri_Offset_DEFINED)
#define IL2CPP_STRUCT_Uri_Offset_DEFINED
struct Uri_Offset {
    uint16_t Scheme;
    uint16_t User;
    uint16_t Host;
    uint16_t PortValue;
    uint16_t Path;
    uint16_t Query;
    uint16_t Fragment;
    uint16_t End;
};
#endif
#if !defined(IL2CPP_STRUCT_Uri_Offset_FWDDECL)
#define IL2CPP_STRUCT_Uri_Offset_FWDDECL
#endif
#undef IL2CPP_STRUCT_Uri_Offset_INITIALIZING
#if !defined(IL2CPP_STRUCT_Uri_Offset_DEFINED) && !defined(IL2CPP_STRUCT_Uri_Offset_FWDDECL)
#include <Modloader/app/structs/Uri_Offset.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Uri_Offset.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
