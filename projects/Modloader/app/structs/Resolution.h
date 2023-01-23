#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Resolution_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Resolution_INITIALIZING
#if !defined(IL2CPP_STRUCT_Resolution_DEFINED)
#define IL2CPP_STRUCT_Resolution_DEFINED
struct Resolution {
    int32_t m_Width;
    int32_t m_Height;
    int32_t m_RefreshRate;
};
#endif
#if !defined(IL2CPP_STRUCT_Resolution_FWDDECL)
#define IL2CPP_STRUCT_Resolution_FWDDECL
#endif
#undef IL2CPP_STRUCT_Resolution_INITIALIZING
#if !defined(IL2CPP_STRUCT_Resolution_DEFINED) && !defined(IL2CPP_STRUCT_Resolution_FWDDECL)
#include <Modloader/app/structs/Resolution.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Resolution.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
