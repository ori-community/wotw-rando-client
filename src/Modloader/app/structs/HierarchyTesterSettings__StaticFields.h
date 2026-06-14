#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HierarchyTesterSettings__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HierarchyTesterSettings__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyTesterSettings__StaticFields_DEFINED)
#define IL2CPP_STRUCT_HierarchyTesterSettings__StaticFields_DEFINED
struct HierarchyTesterSettings__StaticFields {
    int32_t BaselineTestsCount;
    int32_t BaselineRepeats;
    float BaselineProcessTime;
    float BaselineTimeout;
    int32_t ANIMATION_SAMPLES;
    float ProcessTime;
    double MeasureThreshold;
    int32_t StartSceneIndex;
    bool SkipLeaves;
};
#endif
#if !defined(IL2CPP_STRUCT_HierarchyTesterSettings__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_HierarchyTesterSettings__StaticFields_FWDDECL
#endif
#undef IL2CPP_STRUCT_HierarchyTesterSettings__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyTesterSettings__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_HierarchyTesterSettings__StaticFields_FWDDECL)
#include <Modloader/app/structs/HierarchyTesterSettings__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HierarchyTesterSettings__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
