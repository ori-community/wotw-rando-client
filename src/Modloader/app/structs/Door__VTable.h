#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Door__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Door__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Door__VTable_DEFINED)
#define IL2CPP_STRUCT_Door__VTable_DEFINED
struct Door__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Apply;
    VirtualInvokeData get_ApplyOnEditor;
    VirtualInvokeData get_AffectingUberStates;
    VirtualInvokeData get_AllTargets;
    VirtualInvokeData PerformStateTransition;
    VirtualInvokeData GetRequirementsForTimeline;
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData StopTransitions;
};
#endif
#if !defined(IL2CPP_STRUCT_Door__VTable_FWDDECL)
#define IL2CPP_STRUCT_Door__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_Door__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Door__VTable_DEFINED) && !defined(IL2CPP_STRUCT_Door__VTable_FWDDECL)
#include <Modloader/app/structs/Door__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Door__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
