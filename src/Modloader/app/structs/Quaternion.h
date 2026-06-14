#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Quaternion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Quaternion_INITIALIZING
#if !defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_Quaternion_DEFINED
struct Quaternion {
    float x;
    float y;
    float z;
    float w;
};
#endif
#if !defined(IL2CPP_STRUCT_Quaternion_FWDDECL)
#define IL2CPP_STRUCT_Quaternion_FWDDECL
#endif
#undef IL2CPP_STRUCT_Quaternion_INITIALIZING
#if !defined(IL2CPP_STRUCT_Quaternion_DEFINED) && !defined(IL2CPP_STRUCT_Quaternion_FWDDECL)
#include <Modloader/app/structs/Quaternion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Quaternion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
