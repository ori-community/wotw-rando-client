#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Inertia_Body_EffectorLink__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Inertia_Body_EffectorLink__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Inertia_Body_EffectorLink__Fields_DEFINED)
#include <Modloader/app/structs/FullBodyBipedEffector__Enum.h>
#if defined(IL2CPP_STRUCT_FullBodyBipedEffector__Enum_DEFINED)
#define IL2CPP_STRUCT_Inertia_Body_EffectorLink__Fields_DEFINED
struct __declspec(align(8)) Inertia_Body_EffectorLink__Fields {
    FullBodyBipedEffector__Enum effector;

    float weight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Inertia_Body_EffectorLink__Fields_FWDDECL)
#define IL2CPP_STRUCT_Inertia_Body_EffectorLink__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_Inertia_Body_EffectorLink__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Inertia_Body_EffectorLink__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Inertia_Body_EffectorLink__Fields_FWDDECL)
#include <Modloader/app/structs/Inertia_Body_EffectorLink__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Inertia_Body_EffectorLink__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
