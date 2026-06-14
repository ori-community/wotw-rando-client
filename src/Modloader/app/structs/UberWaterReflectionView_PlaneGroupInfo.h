#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterReflectionView_PlaneGroupInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterReflectionView_PlaneGroupInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterReflectionView_PlaneGroupInfo_DEFINED)
#include <Modloader/app/structs/UberWaterReflectionView_GroupType__Enum.h>
#if defined(IL2CPP_STRUCT_UberWaterReflectionView_GroupType__Enum_DEFINED)
#define IL2CPP_STRUCT_UberWaterReflectionView_PlaneGroupInfo_DEFINED
struct UberWaterReflectionView_GroupViews;
struct UberWaterReflectionView_AutomaticGroup;
struct UberWaterReflectionView_PlaneGroupInfo {
    UberWaterReflectionView_GroupType__Enum type;

    struct UberWaterReflectionView_GroupViews* views;
    struct UberWaterReflectionView_AutomaticGroup* lastAutomaticGameGroup;
    struct UberWaterReflectionView_AutomaticGroup* lastAutomaticSceneGroup;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberWaterReflectionView_PlaneGroupInfo_FWDDECL)
#define IL2CPP_STRUCT_UberWaterReflectionView_PlaneGroupInfo_FWDDECL
#include <Modloader/app/structs/UberWaterReflectionView_AutomaticGroup.h>
#include <Modloader/app/structs/UberWaterReflectionView_GroupViews.h>
#endif
#undef IL2CPP_STRUCT_UberWaterReflectionView_PlaneGroupInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterReflectionView_PlaneGroupInfo_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterReflectionView_PlaneGroupInfo_FWDDECL)
#include <Modloader/app/structs/UberWaterReflectionView_PlaneGroupInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterReflectionView_PlaneGroupInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
