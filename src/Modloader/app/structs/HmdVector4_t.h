#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HmdVector4_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HmdVector4_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_HmdVector4_t_DEFINED)
#define IL2CPP_STRUCT_HmdVector4_t_DEFINED
struct HmdVector4_t {
    float v0;
    float v1;
    float v2;
    float v3;
};
#endif
#if !defined(IL2CPP_STRUCT_HmdVector4_t_FWDDECL)
#define IL2CPP_STRUCT_HmdVector4_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_HmdVector4_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_HmdVector4_t_DEFINED) && !defined(IL2CPP_STRUCT_HmdVector4_t_FWDDECL)
#include <Modloader/app/structs/HmdVector4_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HmdVector4_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
