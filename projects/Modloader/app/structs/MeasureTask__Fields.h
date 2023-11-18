#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeasureTask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeasureTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeasureTask__Fields_DEFINED)
#include <Modloader/app/structs/SimpleTask__Fields.h>
#if defined(IL2CPP_STRUCT_SimpleTask__Fields_DEFINED)
#define IL2CPP_STRUCT_MeasureTask__Fields_DEFINED
struct HierarchyDebugMenu_GameObjectItem;
struct SceneSample;
struct IProfilingDataProvider;
struct Action;
struct HPerfTestResult;
struct MeasureTask__Fields {
    struct SimpleTask__Fields _;
    struct HierarchyDebugMenu_GameObjectItem* m_item;
    struct SceneSample* m_model;
    struct IProfilingDataProvider* m_dataProvider;
    struct Action* m_complete;
    struct HPerfTestResult* m_parentResult;
    int32_t m_startFrameIndex;
    int32_t m_endFrameIndex;
    bool m_measureStarted;
    float m_timer;
    int32_t m_tryCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeasureTask__Fields_FWDDECL)
#define IL2CPP_STRUCT_MeasureTask__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/HPerfTestResult.h>
#include <Modloader/app/structs/HierarchyDebugMenu_GameObjectItem.h>
#include <Modloader/app/structs/IProfilingDataProvider.h>
#include <Modloader/app/structs/SceneSample.h>
#endif
#undef IL2CPP_STRUCT_MeasureTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeasureTask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MeasureTask__Fields_FWDDECL)
#include <Modloader/app/structs/MeasureTask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeasureTask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
