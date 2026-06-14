#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StartPurchaseResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StartPurchaseResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_StartPurchaseResult_DEFINED)
#include <Modloader/app/structs/StartPurchaseResult__Fields.h>
#if defined(IL2CPP_STRUCT_StartPurchaseResult__Fields_DEFINED)
#define IL2CPP_STRUCT_StartPurchaseResult_DEFINED
struct StartPurchaseResult__Class;
struct StartPurchaseResult {
    struct StartPurchaseResult__Class* klass;
    MonitorData* monitor;
    struct StartPurchaseResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StartPurchaseResult_FWDDECL)
#define IL2CPP_STRUCT_StartPurchaseResult_FWDDECL
#include <Modloader/app/structs/StartPurchaseResult__Class.h>
#endif
#undef IL2CPP_STRUCT_StartPurchaseResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_StartPurchaseResult_DEFINED) && !defined(IL2CPP_STRUCT_StartPurchaseResult_FWDDECL)
#include <Modloader/app/structs/StartPurchaseResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StartPurchaseResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
