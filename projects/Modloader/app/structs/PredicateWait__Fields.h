#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PredicateWait__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PredicateWait__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PredicateWait__Fields_DEFINED)
#include <Modloader/app/structs/TimeData.h>
#if defined(IL2CPP_STRUCT_TimeData_DEFINED)
#define IL2CPP_STRUCT_PredicateWait__Fields_DEFINED
struct Func_2_ZenFulcrum_EmbeddedBrowser_TimeData_Boolean_;
struct IPendingPromise;
struct __declspec(align(8)) PredicateWait__Fields {
    struct Func_2_ZenFulcrum_EmbeddedBrowser_TimeData_Boolean_* predicate;
    float timeStarted;
    struct IPendingPromise* pendingPromise;
    struct TimeData timeData;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PredicateWait__Fields_FWDDECL)
#define IL2CPP_STRUCT_PredicateWait__Fields_FWDDECL
#include <Modloader/app/structs/Func_2_ZenFulcrum_EmbeddedBrowser_TimeData_Boolean_.h>
#include <Modloader/app/structs/IPendingPromise.h>
#endif
#undef IL2CPP_STRUCT_PredicateWait__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PredicateWait__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PredicateWait__Fields_FWDDECL)
#include <Modloader/app/structs/PredicateWait__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PredicateWait__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
