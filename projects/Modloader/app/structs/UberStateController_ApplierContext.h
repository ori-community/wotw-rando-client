#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateController_ApplierContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateController_ApplierContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateController_ApplierContext_DEFINED)
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#if defined(IL2CPP_STRUCT_UberStateApplyContext__Enum_DEFINED)
#define IL2CPP_STRUCT_UberStateController_ApplierContext_DEFINED
struct IUberStateApplier;
struct UberStateController_ApplierContext {
    struct IUberStateApplier* Applier;
    UberStateApplyContext__Enum Context;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStateController_ApplierContext_FWDDECL)
#define IL2CPP_STRUCT_UberStateController_ApplierContext_FWDDECL
#include <Modloader/app/structs/IUberStateApplier.h>
#endif
#undef IL2CPP_STRUCT_UberStateController_ApplierContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateController_ApplierContext_DEFINED) && !defined(IL2CPP_STRUCT_UberStateController_ApplierContext_FWDDECL)
#include <Modloader/app/structs/UberStateController_ApplierContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateController_ApplierContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
