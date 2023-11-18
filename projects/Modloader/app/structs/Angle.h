#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Angle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Angle_INITIALIZING
#if !defined(IL2CPP_STRUCT_Angle_DEFINED)
#define IL2CPP_STRUCT_Angle_DEFINED
struct Angle {
    float m_radians;
};
#endif
#if !defined(IL2CPP_STRUCT_Angle_FWDDECL)
#define IL2CPP_STRUCT_Angle_FWDDECL
#endif
#undef IL2CPP_STRUCT_Angle_INITIALIZING
#if !defined(IL2CPP_STRUCT_Angle_DEFINED) && !defined(IL2CPP_STRUCT_Angle_FWDDECL)
#include <Modloader/app/structs/Angle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Angle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
