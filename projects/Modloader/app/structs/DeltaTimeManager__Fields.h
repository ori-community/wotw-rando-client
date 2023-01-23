#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeltaTimeManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeltaTimeManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeltaTimeManager__Fields_DEFINED)
#include <Modloader/app/structs/DeltaTimeManager_ControllerType__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_DeltaTimeManager_ControllerType__Enum_DEFINED)
#define IL2CPP_STRUCT_DeltaTimeManager__Fields_DEFINED
struct DeltaTimeManager_DeltaTimeFrameHistory__Array;
struct IDeltaTimeController;
struct Stopwatch;
struct DeltaTimeManager__Fields {
    struct MonoBehaviour__Fields _;
    struct DeltaTimeManager_DeltaTimeFrameHistory__Array* m_history;
    int32_t m_historyIndex;
    bool m_historyWrapped;
    struct IDeltaTimeController* m_controller;
    DeltaTimeManager_ControllerType__Enum m_controllerType;

    bool m_enabled;
    struct Stopwatch* m_stopWatch;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeltaTimeManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_DeltaTimeManager__Fields_FWDDECL
#include <Modloader/app/structs/DeltaTimeManager_DeltaTimeFrameHistory__Array.h>
#include <Modloader/app/structs/IDeltaTimeController.h>
#include <Modloader/app/structs/Stopwatch.h>
#endif
#undef IL2CPP_STRUCT_DeltaTimeManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeltaTimeManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DeltaTimeManager__Fields_FWDDECL)
#include <Modloader/app/structs/DeltaTimeManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeltaTimeManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
