#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterFallMasksSystem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterFallMasksSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterFallMasksSystem__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#if defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_WaterFallMasksSystem__Fields_DEFINED
struct List_1_Moon_WaterFallMask_;
struct List_1_Moon_ISuspendable_;
struct List_1_Moon_IWaterfallInteractionAgent_;
struct Queue_1_Moon_WaterFallMask_;
struct String;
struct __declspec(align(8)) WaterFallMasksSystem__Fields {
    struct List_1_Moon_WaterFallMask_* m_waterFalls;
    struct List_1_Moon_ISuspendable_* m_waterFallsSuspendables;
    struct List_1_Moon_IWaterfallInteractionAgent_* m_agents;
    struct LayerMask m_staticCollisionMask;
    struct LayerMask m_dynamicCollisionMask;
    struct Queue_1_Moon_WaterFallMask_* m_waterFallInitQueue;
    bool m_initQueueIsBeingProcessed;
    struct String* m_contextualDebugData;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterFallMasksSystem__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaterFallMasksSystem__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/List_1_Moon_IWaterfallInteractionAgent_.h>
#include <Modloader/app/structs/List_1_Moon_WaterFallMask_.h>
#include <Modloader/app/structs/Queue_1_Moon_WaterFallMask_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_WaterFallMasksSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterFallMasksSystem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaterFallMasksSystem__Fields_FWDDECL)
#include <Modloader/app/structs/WaterFallMasksSystem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterFallMasksSystem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
