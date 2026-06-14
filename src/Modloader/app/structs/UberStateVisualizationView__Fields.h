#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateVisualizationView__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateVisualizationView__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateVisualizationView__Fields_DEFINED)
#include <Modloader/app/structs/UberStateVisualizationView_UberStateVisualizationLayout.h>
#include <Modloader/app/structs/UberStateVisualizationView_UberStateVisualizationModel.h>
#if defined(IL2CPP_STRUCT_UberStateVisualizationView_UberStateVisualizationLayout_DEFINED) && defined(IL2CPP_STRUCT_UberStateVisualizationView_UberStateVisualizationModel_DEFINED)
#define IL2CPP_STRUCT_UberStateVisualizationView__Fields_DEFINED
struct ListView;
struct UberStateDataView;
struct SpaceMongerWidget;
struct __declspec(align(8)) UberStateVisualizationView__Fields {
    struct UberStateVisualizationView_UberStateVisualizationLayout m_layout;
    struct UberStateVisualizationView_UberStateVisualizationModel m_model;
    struct ListView* m_groupsListView;
    struct ListView* m_statesListView;
    struct UberStateDataView* m_stateDataView;
    struct SpaceMongerWidget* m_spaceMonger;
    bool inputLeft;
    bool inputRight;
    bool inputDown;
    bool inputUp;
    float lastDpadX;
    float lastDpadY;
    float lastLeftStickX;
    float lastLeftStickY;
    bool leftStickLeft;
    bool leftStickRight;
    bool leftStickDown;
    bool leftStickUp;
    bool dpadLeft;
    bool dpadRight;
    bool dpadUp;
    bool dpadDown;
    bool inputActivate;
    int32_t m_currentSectionIndex;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStateVisualizationView__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberStateVisualizationView__Fields_FWDDECL
#include <Modloader/app/structs/ListView.h>
#include <Modloader/app/structs/SpaceMongerWidget.h>
#include <Modloader/app/structs/UberStateDataView.h>
#endif
#undef IL2CPP_STRUCT_UberStateVisualizationView__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateVisualizationView__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberStateVisualizationView__Fields_FWDDECL)
#include <Modloader/app/structs/UberStateVisualizationView__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateVisualizationView__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
