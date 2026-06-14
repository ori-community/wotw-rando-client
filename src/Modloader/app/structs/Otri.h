#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Otri_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Otri_INITIALIZING
#if !defined(IL2CPP_STRUCT_Otri_DEFINED)
#define IL2CPP_STRUCT_Otri_DEFINED
struct Triangle;
struct Otri {
    struct Triangle* tri;
    int32_t orient;
};
#endif
#if !defined(IL2CPP_STRUCT_Otri_FWDDECL)
#define IL2CPP_STRUCT_Otri_FWDDECL
#include <Modloader/app/structs/Triangle.h>
#endif
#undef IL2CPP_STRUCT_Otri_INITIALIZING
#if !defined(IL2CPP_STRUCT_Otri_DEFINED) && !defined(IL2CPP_STRUCT_Otri_FWDDECL)
#include <Modloader/app/structs/Otri.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Otri.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
