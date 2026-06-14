#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPostProcess_Bezier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPostProcess_Bezier_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPostProcess_Bezier_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_UberPostProcess_Bezier_DEFINED
struct UberPostProcess_Bezier {
    struct Vector2 P0;
    struct Vector2 P1;
    struct Vector2 P2;
    struct Vector2 P3;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPostProcess_Bezier_FWDDECL)
#define IL2CPP_STRUCT_UberPostProcess_Bezier_FWDDECL
#endif
#undef IL2CPP_STRUCT_UberPostProcess_Bezier_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPostProcess_Bezier_DEFINED) && !defined(IL2CPP_STRUCT_UberPostProcess_Bezier_FWDDECL)
#include <Modloader/app/structs/UberPostProcess_Bezier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPostProcess_Bezier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
