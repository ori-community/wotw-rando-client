#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OptionsScreen__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OptionsScreen__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_OptionsScreen__VTable_DEFINED)
#define IL2CPP_STRUCT_OptionsScreen__VTable_DEFINED
struct OptionsScreen__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Show;
    VirtualInvokeData Hide;
    VirtualInvokeData ShowImmediate;
    VirtualInvokeData HideImmediate;
    VirtualInvokeData PlaySoundEvent;
    VirtualInvokeData get_CanInterruptTab;
    VirtualInvokeData get_BackgroundMode;
    VirtualInvokeData get_NeedsExperienceUI;
    VirtualInvokeData get_NeedOreUI;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData OnPostTimeSlicedEnable;
    VirtualInvokeData OnInstantiate;
};
#endif
#if !defined(IL2CPP_STRUCT_OptionsScreen__VTable_FWDDECL)
#define IL2CPP_STRUCT_OptionsScreen__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_OptionsScreen__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_OptionsScreen__VTable_DEFINED) && !defined(IL2CPP_STRUCT_OptionsScreen__VTable_FWDDECL)
#include <Modloader/app/structs/OptionsScreen__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OptionsScreen__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
