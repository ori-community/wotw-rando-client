#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberGCLogic__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberGCLogic__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberGCLogic__StaticFields_DEFINED)
#include <Modloader/app/structs/UberGCLogic_ResourceCollectPriorityMode__Enum.h>
#if defined(IL2CPP_STRUCT_UberGCLogic_ResourceCollectPriorityMode__Enum_DEFINED)
#define IL2CPP_STRUCT_UberGCLogic__StaticFields_DEFINED
struct UberGCLogic_GCLogicSettings;
struct Single__Array;
struct Single__Array__Array;
struct Int32__Array;
struct UberGCLogic__StaticFields {
    struct UberGCLogic_GCLogicSettings* Settings;
    UberGCLogic_ResourceCollectPriorityMode__Enum CollectPriorityMode;

    struct Single__Array* s_memoryProbes;
    struct Single__Array* s_lastCleanupTimes;
    struct Single__Array__Array* s_lastCleanupCheckTimes;
    struct Int32__Array* s_sceneUnloadsSinceLastCleanup;
    struct Int32__Array* s_fadersDoneSinceLastCleanup;
    struct Int32__Array* s_forcedCleanupsAfterFaderType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberGCLogic__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_UberGCLogic__StaticFields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/Single__Array__Array.h>
#include <Modloader/app/structs/UberGCLogic_GCLogicSettings.h>
#endif
#undef IL2CPP_STRUCT_UberGCLogic__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberGCLogic__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_UberGCLogic__StaticFields_FWDDECL)
#include <Modloader/app/structs/UberGCLogic__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberGCLogic__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
