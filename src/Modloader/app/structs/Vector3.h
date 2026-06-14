#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Vector3_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Vector3_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_Vector3_DEFINED
struct Vector3 {
    float x;
    float y;
    float z;
};
#endif
#if !defined(IL2CPP_STRUCT_Vector3_FWDDECL)
#define IL2CPP_STRUCT_Vector3_FWDDECL
#endif
#undef IL2CPP_STRUCT_Vector3_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vector3_DEFINED) && !defined(IL2CPP_STRUCT_Vector3_FWDDECL)
#include <Modloader/app/structs/Vector3.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Vector3.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
