#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CachedReflectionInfo__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CachedReflectionInfo__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CachedReflectionInfo__StaticFields_DEFINED)
#define IL2CPP_STRUCT_CachedReflectionInfo__StaticFields_DEFINED
struct MethodInfo_1;
struct CachedReflectionInfo__StaticFields {
    struct MethodInfo_1* s_CallSiteOps_SetNotMatched;
    struct MethodInfo_1* s_CallSiteOps_CreateMatchmaker;
    struct MethodInfo_1* s_CallSiteOps_GetMatch;
    struct MethodInfo_1* s_CallSiteOps_ClearMatch;
    struct MethodInfo_1* s_CallSiteOps_UpdateRules;
    struct MethodInfo_1* s_CallSiteOps_GetRules;
    struct MethodInfo_1* s_CallSiteOps_GetRuleCache;
    struct MethodInfo_1* s_CallSiteOps_GetCachedRules;
    struct MethodInfo_1* s_CallSiteOps_AddRule;
    struct MethodInfo_1* s_CallSiteOps_MoveRule;
    struct MethodInfo_1* s_CallSiteOps_Bind;
    struct MethodInfo_1* s_String_op_Equality_String_String;
    struct MethodInfo_1* s_Math_Pow_Double_Double;
};
#endif
#if !defined(IL2CPP_STRUCT_CachedReflectionInfo__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_CachedReflectionInfo__StaticFields_FWDDECL
#include <Modloader/app/structs/MethodInfo_1.h>
#endif
#undef IL2CPP_STRUCT_CachedReflectionInfo__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CachedReflectionInfo__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_CachedReflectionInfo__StaticFields_FWDDECL)
#include <Modloader/app/structs/CachedReflectionInfo__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CachedReflectionInfo__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
