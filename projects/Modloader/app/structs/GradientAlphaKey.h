#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GradientAlphaKey_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GradientAlphaKey_INITIALIZING
#if !defined(IL2CPP_STRUCT_GradientAlphaKey_DEFINED)
#define IL2CPP_STRUCT_GradientAlphaKey_DEFINED
struct GradientAlphaKey {
    float alpha;
    float time;
};
#endif
#if !defined(IL2CPP_STRUCT_GradientAlphaKey_FWDDECL)
#define IL2CPP_STRUCT_GradientAlphaKey_FWDDECL
#endif
#undef IL2CPP_STRUCT_GradientAlphaKey_INITIALIZING
#if !defined(IL2CPP_STRUCT_GradientAlphaKey_DEFINED) && !defined(IL2CPP_STRUCT_GradientAlphaKey_FWDDECL)
#include <Modloader/app/structs/GradientAlphaKey.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GradientAlphaKey.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
