#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Vector4_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Vector4_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vector4_DEFINED)
#define IL2CPP_STRUCT_Vector4_DEFINED
struct Vector4 {
    float x;
    float y;
    float z;
    float w;
};
#endif
#if !defined(IL2CPP_STRUCT_Vector4_FWDDECL)
#define IL2CPP_STRUCT_Vector4_FWDDECL
#endif
#undef IL2CPP_STRUCT_Vector4_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vector4_DEFINED) && !defined(IL2CPP_STRUCT_Vector4_FWDDECL)
#include <Modloader/app/structs/Vector4.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Vector4.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
