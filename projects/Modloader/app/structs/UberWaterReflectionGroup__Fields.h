#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterReflectionGroup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterReflectionGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterReflectionGroup__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/UberWaterReflectionView_UpdateMode__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_UberWaterReflectionView_UpdateMode__Enum_DEFINED)
#define IL2CPP_STRUCT_UberWaterReflectionGroup__Fields_DEFINED
struct UberWaterReflectionView_GroupViews;
struct UberWaterReflectionGroup__Fields {
    struct MonoBehaviour__Fields _;
    struct UberWaterReflectionView_GroupViews* views;
    UberWaterReflectionView_UpdateMode__Enum updateMode;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberWaterReflectionGroup__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberWaterReflectionGroup__Fields_FWDDECL
#include <Modloader/app/structs/UberWaterReflectionView_GroupViews.h>
#endif
#undef IL2CPP_STRUCT_UberWaterReflectionGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterReflectionGroup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterReflectionGroup__Fields_FWDDECL)
#include <Modloader/app/structs/UberWaterReflectionGroup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterReflectionGroup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
