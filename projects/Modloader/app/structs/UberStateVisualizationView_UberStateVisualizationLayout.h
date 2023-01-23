#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateVisualizationView_UberStateVisualizationLayout_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateVisualizationView_UberStateVisualizationLayout_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateVisualizationView_UberStateVisualizationLayout_DEFINED)
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_UberStateVisualizationView_UberStateVisualizationLayout_DEFINED
struct UberStateVisualizationView_UberStateVisualizationLayout {
    struct Rect ViewRect;
    struct Rect ToolbarRect;
    struct Rect MapButtonRect;
    struct Rect GroupsListRect;
    struct Rect StatesListRect;
    struct Rect StateDetailsRect;
    struct Rect SpaceMongerRect;
    float GroupsListRectWidth;
    float StatesListRectWidth;
    float SpaceMongerRectHeigth;
    struct Rect SpaceMongerSplitterRect;
    struct Rect GroupsSplitterRect;
    struct Rect StatesSplitterRect;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStateVisualizationView_UberStateVisualizationLayout_FWDDECL)
#define IL2CPP_STRUCT_UberStateVisualizationView_UberStateVisualizationLayout_FWDDECL
#endif
#undef IL2CPP_STRUCT_UberStateVisualizationView_UberStateVisualizationLayout_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateVisualizationView_UberStateVisualizationLayout_DEFINED) && !defined(IL2CPP_STRUCT_UberStateVisualizationView_UberStateVisualizationLayout_FWDDECL)
#include <Modloader/app/structs/UberStateVisualizationView_UberStateVisualizationLayout.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateVisualizationView_UberStateVisualizationLayout.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
