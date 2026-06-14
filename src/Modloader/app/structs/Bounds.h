#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Bounds_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Bounds_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bounds_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_Bounds_DEFINED
struct Bounds {
    struct Vector3 m_Center;
    struct Vector3 m_Extents;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Bounds_FWDDECL)
#define IL2CPP_STRUCT_Bounds_FWDDECL
#endif
#undef IL2CPP_STRUCT_Bounds_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bounds_DEFINED) && !defined(IL2CPP_STRUCT_Bounds_FWDDECL)
#include <Modloader/app/structs/Bounds.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Bounds.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
