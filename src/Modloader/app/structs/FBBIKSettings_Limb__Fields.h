#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FBBIKSettings_Limb__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FBBIKSettings_Limb__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FBBIKSettings_Limb__Fields_DEFINED)
#include <Modloader/app/structs/FBIKChain_Smoothing__Enum.h>
#if defined(IL2CPP_STRUCT_FBIKChain_Smoothing__Enum_DEFINED)
#define IL2CPP_STRUCT_FBBIKSettings_Limb__Fields_DEFINED
struct __declspec(align(8)) FBBIKSettings_Limb__Fields {
    FBIKChain_Smoothing__Enum reachSmoothing;

    float maintainRelativePositionWeight;
    float mappingWeight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FBBIKSettings_Limb__Fields_FWDDECL)
#define IL2CPP_STRUCT_FBBIKSettings_Limb__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_FBBIKSettings_Limb__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FBBIKSettings_Limb__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FBBIKSettings_Limb__Fields_FWDDECL)
#include <Modloader/app/structs/FBBIKSettings_Limb__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FBBIKSettings_Limb__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
