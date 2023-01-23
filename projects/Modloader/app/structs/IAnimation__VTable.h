#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IAnimation__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IAnimation__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAnimation__VTable_DEFINED)
#define IL2CPP_STRUCT_IAnimation__VTable_DEFINED
struct IAnimation__VTable {
    VirtualInvokeData get_Name;
    VirtualInvokeData get_Layer;
    VirtualInvokeData get_AnimatorDefinition;
    VirtualInvokeData get_DefaultTransitionInDuration;
    VirtualInvokeData get_UseDefaultTransitionIn;
    VirtualInvokeData get_DefaultTransitionIn;
    VirtualInvokeData get_LayerBlendInDuration;
    VirtualInvokeData get_LayerBlendOutDuration;
    VirtualInvokeData get_DisabledPostprocessGroups;
    VirtualInvokeData get_PostprocessGroupModifiers;
    VirtualInvokeData get_Type;
    VirtualInvokeData get_AdditiveWeightMultiplier;
    VirtualInvokeData GetTransition;
    VirtualInvokeData IsLooping;
    VirtualInvokeData GetDuration;
};
#endif
#if !defined(IL2CPP_STRUCT_IAnimation__VTable_FWDDECL)
#define IL2CPP_STRUCT_IAnimation__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IAnimation__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAnimation__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IAnimation__VTable_FWDDECL)
#include <Modloader/app/structs/IAnimation__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IAnimation__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
