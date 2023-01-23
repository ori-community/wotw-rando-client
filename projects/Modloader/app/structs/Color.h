#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Color_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Color_INITIALIZING
#if !defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_Color_DEFINED
struct Color {
    float r;
    float g;
    float b;
    float a;
};
#endif
#if !defined(IL2CPP_STRUCT_Color_FWDDECL)
#define IL2CPP_STRUCT_Color_FWDDECL
#endif
#undef IL2CPP_STRUCT_Color_INITIALIZING
#if !defined(IL2CPP_STRUCT_Color_DEFINED) && !defined(IL2CPP_STRUCT_Color_FWDDECL)
#include <Modloader/app/structs/Color.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Color.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
