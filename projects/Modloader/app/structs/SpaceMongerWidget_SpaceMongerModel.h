#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpaceMongerWidget_SpaceMongerModel_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpaceMongerWidget_SpaceMongerModel_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpaceMongerWidget_SpaceMongerModel_DEFINED)
#include <Modloader/app/structs/Nullable_1_Moon_UberStateVisualization_UberStateData_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_Moon_UberStateVisualization_UberStateData__DEFINED)
#define IL2CPP_STRUCT_SpaceMongerWidget_SpaceMongerModel_DEFINED
struct List_1_UnityEngine_Rect_;
struct List_1_Moon_UberStateVisualization_UberStateGroupData_;
struct List_1_Moon_UberStateVisualization_UberStateData_;
struct GUIStyle;
struct SpaceMongerWidget_SpaceMongerModel {
    int64_t OverallDataSize;
    struct List_1_UnityEngine_Rect_* Splitters;
    struct List_1_Moon_UberStateVisualization_UberStateGroupData_* StateGroupDatas;
    struct List_1_Moon_UberStateVisualization_UberStateData_* States;
    struct Nullable_1_Moon_UberStateVisualization_UberStateData_ HighlightedState;
    struct Nullable_1_Moon_UberStateVisualization_UberStateData_ SelectedState;
    struct GUIStyle* m_centeredLabelStyle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpaceMongerWidget_SpaceMongerModel_FWDDECL)
#define IL2CPP_STRUCT_SpaceMongerWidget_SpaceMongerModel_FWDDECL
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/List_1_Moon_UberStateVisualization_UberStateData_.h>
#include <Modloader/app/structs/List_1_Moon_UberStateVisualization_UberStateGroupData_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Rect_.h>
#endif
#undef IL2CPP_STRUCT_SpaceMongerWidget_SpaceMongerModel_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpaceMongerWidget_SpaceMongerModel_DEFINED) && !defined(IL2CPP_STRUCT_SpaceMongerWidget_SpaceMongerModel_FWDDECL)
#include <Modloader/app/structs/SpaceMongerWidget_SpaceMongerModel.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpaceMongerWidget_SpaceMongerModel.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
