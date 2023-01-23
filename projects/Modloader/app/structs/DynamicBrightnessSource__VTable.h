#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicBrightnessSource__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicBrightnessSource__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicBrightnessSource__VTable_DEFINED)
#define IL2CPP_STRUCT_DynamicBrightnessSource__VTable_DEFINED
struct DynamicBrightnessSource__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateBrigthnessInfluence;
    VirtualInvokeData get_BrightnessInfluceOrder;
    VirtualInvokeData get_BrightnessInfluceAdditive;
    VirtualInvokeData get_BrightnessInfluceMultiplicative;
    VirtualInvokeData get_ContributeToAdditive;
    VirtualInvokeData get_ContributeToMultiplicative;
    VirtualInvokeData get_BrightnessInfluceWeight;
    VirtualInvokeData OnFrustumEnter;
    VirtualInvokeData OnFrustumExit;
    VirtualInvokeData get_InsideFrustum;
    VirtualInvokeData get_Bounds;
    VirtualInvokeData get_AllowCacheBounds;
};
#endif
#if !defined(IL2CPP_STRUCT_DynamicBrightnessSource__VTable_FWDDECL)
#define IL2CPP_STRUCT_DynamicBrightnessSource__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_DynamicBrightnessSource__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicBrightnessSource__VTable_DEFINED) && !defined(IL2CPP_STRUCT_DynamicBrightnessSource__VTable_FWDDECL)
#include <Modloader/app/structs/DynamicBrightnessSource__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicBrightnessSource__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
