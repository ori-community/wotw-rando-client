#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneFPSTest__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneFPSTest__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneFPSTest__StaticFields_DEFINED)
#define IL2CPP_STRUCT_SceneFPSTest__StaticFields_DEFINED
struct SceneFPSTest;
struct SceneFPSTest__StaticFields {
    struct SceneFPSTest* Instance;
    int32_t CurrentSceneMetaDataIndex;
    bool SHOULD_CREATE_SCREENSHOT;
    bool SHOULD_CREATE_MEMORY_REPORT;
    bool SHOULD_RUN_SAMPLE;
    bool SHOULD_RUN_CPU_SAMPLE;
    bool SHOULD_RUN_CPU_B_SAMPLE;
    bool SHOULD_SKIP_CUTSCENES;
    bool OVERRIDE_MISTYWOODS_CONDITION;
    bool HACK_REVERSE_ISCUTSCENE;
    bool DRAW_DEBUG_UI;
};
#endif
#if !defined(IL2CPP_STRUCT_SceneFPSTest__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SceneFPSTest__StaticFields_FWDDECL
#include <Modloader/app/structs/SceneFPSTest.h>
#endif
#undef IL2CPP_STRUCT_SceneFPSTest__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneFPSTest__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SceneFPSTest__StaticFields_FWDDECL)
#include <Modloader/app/structs/SceneFPSTest__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneFPSTest__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
