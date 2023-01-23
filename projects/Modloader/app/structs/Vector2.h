#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Vector2_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Vector2_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_Vector2_DEFINED
struct Vector2 {
    float x;
    float y;
};
#endif
#if !defined(IL2CPP_STRUCT_Vector2_FWDDECL)
#define IL2CPP_STRUCT_Vector2_FWDDECL
#endif
#undef IL2CPP_STRUCT_Vector2_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vector2_DEFINED) && !defined(IL2CPP_STRUCT_Vector2_FWDDECL)
#include <Modloader/app/structs/Vector2.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Vector2.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
