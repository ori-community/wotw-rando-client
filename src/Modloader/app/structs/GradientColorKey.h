#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GradientColorKey_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GradientColorKey_INITIALIZING
#if !defined(IL2CPP_STRUCT_GradientColorKey_DEFINED)
#include <Modloader/app/structs/Color.h>
#if defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_GradientColorKey_DEFINED
struct GradientColorKey {
    struct Color color;
    float time;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GradientColorKey_FWDDECL)
#define IL2CPP_STRUCT_GradientColorKey_FWDDECL
#endif
#undef IL2CPP_STRUCT_GradientColorKey_INITIALIZING
#if !defined(IL2CPP_STRUCT_GradientColorKey_DEFINED) && !defined(IL2CPP_STRUCT_GradientColorKey_FWDDECL)
#include <Modloader/app/structs/GradientColorKey.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GradientColorKey.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
