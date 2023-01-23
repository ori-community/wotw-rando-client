#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VRTextureBounds_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VRTextureBounds_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_VRTextureBounds_t_DEFINED)
#define IL2CPP_STRUCT_VRTextureBounds_t_DEFINED
struct VRTextureBounds_t {
    float uMin;
    float vMin;
    float uMax;
    float vMax;
};
#endif
#if !defined(IL2CPP_STRUCT_VRTextureBounds_t_FWDDECL)
#define IL2CPP_STRUCT_VRTextureBounds_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_VRTextureBounds_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_VRTextureBounds_t_DEFINED) && !defined(IL2CPP_STRUCT_VRTextureBounds_t_FWDDECL)
#include <Modloader/app/structs/VRTextureBounds_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VRTextureBounds_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
