#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateController__Fields_DEFINED)
#define IL2CPP_STRUCT_UberStateController__Fields_DEFINED
struct List_1_Moon_UberStateController_ApplierContext_;
struct List_1_Moon_IUberStateApplier_;
struct __declspec(align(8)) UberStateController__Fields {
    struct List_1_Moon_UberStateController_ApplierContext_* AppliersToApply;
    struct List_1_Moon_IUberStateApplier_* m_tempToRemove;
};
#endif
#if !defined(IL2CPP_STRUCT_UberStateController__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberStateController__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_IUberStateApplier_.h>
#include <Modloader/app/structs/List_1_Moon_UberStateController_ApplierContext_.h>
#endif
#undef IL2CPP_STRUCT_UberStateController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberStateController__Fields_FWDDECL)
#include <Modloader/app/structs/UberStateController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
