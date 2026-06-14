#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RTime32_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RTime32_INITIALIZING
#if !defined(IL2CPP_STRUCT_RTime32_DEFINED)
#define IL2CPP_STRUCT_RTime32_DEFINED
struct RTime32 {
    uint32_t m_RTime32;
};
#endif
#if !defined(IL2CPP_STRUCT_RTime32_FWDDECL)
#define IL2CPP_STRUCT_RTime32_FWDDECL
#endif
#undef IL2CPP_STRUCT_RTime32_INITIALIZING
#if !defined(IL2CPP_STRUCT_RTime32_DEFINED) && !defined(IL2CPP_STRUCT_RTime32_FWDDECL)
#include <Modloader/app/structs/RTime32.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RTime32.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
