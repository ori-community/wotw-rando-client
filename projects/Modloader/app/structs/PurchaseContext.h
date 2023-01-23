#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PurchaseContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PurchaseContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_PurchaseContext_DEFINED)
#include <Modloader/app/structs/PurchaseResult__Enum.h>
#if defined(IL2CPP_STRUCT_PurchaseResult__Enum_DEFINED)
#define IL2CPP_STRUCT_PurchaseContext_DEFINED
struct PurchaseContext {
    PurchaseResult__Enum Result;

    bool ForceHideScreenOnPurchase;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PurchaseContext_FWDDECL)
#define IL2CPP_STRUCT_PurchaseContext_FWDDECL
#endif
#undef IL2CPP_STRUCT_PurchaseContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_PurchaseContext_DEFINED) && !defined(IL2CPP_STRUCT_PurchaseContext_FWDDECL)
#include <Modloader/app/structs/PurchaseContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PurchaseContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
