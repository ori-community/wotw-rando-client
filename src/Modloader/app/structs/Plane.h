#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Plane_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Plane_INITIALIZING
#if !defined(IL2CPP_STRUCT_Plane_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_Plane_DEFINED
struct Plane {
    struct Vector3 m_Normal;
    float m_Distance;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Plane_FWDDECL)
#define IL2CPP_STRUCT_Plane_FWDDECL
#endif
#undef IL2CPP_STRUCT_Plane_INITIALIZING
#if !defined(IL2CPP_STRUCT_Plane_DEFINED) && !defined(IL2CPP_STRUCT_Plane_FWDDECL)
#include <Modloader/app/structs/Plane.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Plane.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
