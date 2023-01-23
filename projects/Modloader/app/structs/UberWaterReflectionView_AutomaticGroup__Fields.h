#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterReflectionView_AutomaticGroup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterReflectionView_AutomaticGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterReflectionView_AutomaticGroup__Fields_DEFINED)
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_Vector4_DEFINED)
#define IL2CPP_STRUCT_UberWaterReflectionView_AutomaticGroup__Fields_DEFINED
struct UberWaterReflectionView_GroupViews;
struct __declspec(align(8)) UberWaterReflectionView_AutomaticGroup__Fields {
    struct Vector4 plane;
    float strength;
    struct UberWaterReflectionView_GroupViews* views;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberWaterReflectionView_AutomaticGroup__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberWaterReflectionView_AutomaticGroup__Fields_FWDDECL
#include <Modloader/app/structs/UberWaterReflectionView_GroupViews.h>
#endif
#undef IL2CPP_STRUCT_UberWaterReflectionView_AutomaticGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterReflectionView_AutomaticGroup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterReflectionView_AutomaticGroup__Fields_FWDDECL)
#include <Modloader/app/structs/UberWaterReflectionView_AutomaticGroup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterReflectionView_AutomaticGroup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
