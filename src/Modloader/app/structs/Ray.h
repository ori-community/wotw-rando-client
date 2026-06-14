#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Ray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Ray_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ray_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_Ray_DEFINED
struct Ray {
    struct Vector3 m_Origin;
    struct Vector3 m_Direction;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Ray_FWDDECL)
#define IL2CPP_STRUCT_Ray_FWDDECL
#endif
#undef IL2CPP_STRUCT_Ray_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ray_DEFINED) && !defined(IL2CPP_STRUCT_Ray_FWDDECL)
#include <Modloader/app/structs/Ray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Ray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
