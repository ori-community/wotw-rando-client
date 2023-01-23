#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterReflectionView__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterReflectionView__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterReflectionView__Fields_DEFINED)
#include <Modloader/app/structs/Int2.h>
#if defined(IL2CPP_STRUCT_Int2_DEFINED)
#define IL2CPP_STRUCT_UberWaterReflectionView__Fields_DEFINED
struct List_1_UberWaterReflectionView_AutomaticGroup_;
struct MoonRenderPipelineView;
struct HashSet_1_UberWaterReflectionView_Group_;
struct List_1_UberWaterReflectionView_Group_;
struct SortedList_2_System_Int64_UberWaterReflectionView_Group_;
struct Stack_1_UnityEngine_RenderTexture_;
struct RenderTexture;
struct __declspec(align(8)) UberWaterReflectionView__Fields {
    struct List_1_UberWaterReflectionView_AutomaticGroup_* visibleAutomaticGroups;
    struct MoonRenderPipelineView* view;
    struct Int2 viewSize;
    struct HashSet_1_UberWaterReflectionView_Group_* registeredGroups;
    struct HashSet_1_UberWaterReflectionView_Group_* visibleGroups;
    struct List_1_UberWaterReflectionView_Group_* renderedGroups;
    int32_t visiblePlaneCount;
    struct SortedList_2_System_Int64_UberWaterReflectionView_Group_* visibleGroupsSorted;
    struct Stack_1_UnityEngine_RenderTexture_* texturePool;
    float lastRecycleTime;
    bool doRecycle;
    struct HashSet_1_UberWaterReflectionView_Group_* registeredGroupsSwap;
    struct RenderTexture* depthRT;
    bool blurRtAcquired;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberWaterReflectionView__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberWaterReflectionView__Fields_FWDDECL
#include <Modloader/app/structs/HashSet_1_UberWaterReflectionView_Group_.h>
#include <Modloader/app/structs/List_1_UberWaterReflectionView_AutomaticGroup_.h>
#include <Modloader/app/structs/List_1_UberWaterReflectionView_Group_.h>
#include <Modloader/app/structs/MoonRenderPipelineView.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/SortedList_2_System_Int64_UberWaterReflectionView_Group_.h>
#include <Modloader/app/structs/Stack_1_UnityEngine_RenderTexture_.h>
#endif
#undef IL2CPP_STRUCT_UberWaterReflectionView__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterReflectionView__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterReflectionView__Fields_FWDDECL)
#include <Modloader/app/structs/UberWaterReflectionView__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterReflectionView__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
