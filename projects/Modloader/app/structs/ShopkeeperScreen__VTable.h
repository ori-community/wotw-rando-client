#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShopkeeperScreen__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShopkeeperScreen__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShopkeeperScreen__VTable_DEFINED)
#define IL2CPP_STRUCT_ShopkeeperScreen__VTable_DEFINED
struct ShopkeeperScreen__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Show;
    VirtualInvokeData Hide;
    VirtualInvokeData ShowImmediate;
    VirtualInvokeData HideImmediate;
    VirtualInvokeData PlaySoundEvent;
    VirtualInvokeData get_NavigationManager;
    VirtualInvokeData get_EffectTarget;
    VirtualInvokeData get_PurchaseCompleteSound;
    VirtualInvokeData get_PurchaseBeginSound;
    VirtualInvokeData get_PurchaseRTPC;
    VirtualInvokeData PurchaseInput;
    VirtualInvokeData PurchaseBegin;
    VirtualInvokeData PurchaseUpdate;
    VirtualInvokeData CanPurchase;
    VirtualInvokeData CompletePurchase;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData get_CanInterruptTab;
    VirtualInvokeData get_BackgroundMode;
    VirtualInvokeData get_NeedsExperienceUI;
    VirtualInvokeData get_NeedOreUI;
    VirtualInvokeData OnPostTimeSlicedEnable;
    VirtualInvokeData OnInstantiate;
    VirtualInvokeData get_ShopInstance;
    VirtualInvokeData set_ShopInstance;
    VirtualInvokeData get_Items;
    VirtualInvokeData get_NeedsExperienceUI_1;
    VirtualInvokeData get_NeedOreUI_1;
    VirtualInvokeData AdditionalUpdate;
    VirtualInvokeData Init;
};
#endif
#if !defined(IL2CPP_STRUCT_ShopkeeperScreen__VTable_FWDDECL)
#define IL2CPP_STRUCT_ShopkeeperScreen__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_ShopkeeperScreen__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShopkeeperScreen__VTable_DEFINED) && !defined(IL2CPP_STRUCT_ShopkeeperScreen__VTable_FWDDECL)
#include <Modloader/app/structs/ShopkeeperScreen__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShopkeeperScreen__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
