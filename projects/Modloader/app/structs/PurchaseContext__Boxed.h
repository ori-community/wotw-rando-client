#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PurchaseContext__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PurchaseContext__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PurchaseContext__Boxed_DEFINED)
#include <Modloader/app/structs/PurchaseContext.h>
#if defined(IL2CPP_STRUCT_PurchaseContext_DEFINED)
#define IL2CPP_STRUCT_PurchaseContext__Boxed_DEFINED
struct PurchaseContext__Class;
struct PurchaseContext__Boxed {
    struct PurchaseContext__Class* klass;
    MonitorData* monitor;
    struct PurchaseContext fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PurchaseContext__Boxed_FWDDECL)
#define IL2CPP_STRUCT_PurchaseContext__Boxed_FWDDECL
#include <Modloader/app/structs/PurchaseContext__Class.h>
#endif
#undef IL2CPP_STRUCT_PurchaseContext__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PurchaseContext__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_PurchaseContext__Boxed_FWDDECL)
#include <Modloader/app/structs/PurchaseContext__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PurchaseContext__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
