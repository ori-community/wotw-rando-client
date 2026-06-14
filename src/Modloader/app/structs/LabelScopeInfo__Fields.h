#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LabelScopeInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LabelScopeInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LabelScopeInfo__Fields_DEFINED)
#include <Modloader/app/structs/LabelScopeKind__Enum.h>
#if defined(IL2CPP_STRUCT_LabelScopeKind__Enum_DEFINED)
#define IL2CPP_STRUCT_LabelScopeInfo__Fields_DEFINED
struct HybridReferenceDictionary_2_System_Linq_Expressions_LabelTarget_LabelInfo_;
struct LabelScopeInfo;
struct __declspec(align(8)) LabelScopeInfo__Fields {
    struct HybridReferenceDictionary_2_System_Linq_Expressions_LabelTarget_LabelInfo_* _labels;
    LabelScopeKind__Enum Kind;

    struct LabelScopeInfo* Parent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LabelScopeInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_LabelScopeInfo__Fields_FWDDECL
#include <Modloader/app/structs/HybridReferenceDictionary_2_System_Linq_Expressions_LabelTarget_LabelInfo_.h>
#include <Modloader/app/structs/LabelScopeInfo.h>
#endif
#undef IL2CPP_STRUCT_LabelScopeInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LabelScopeInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LabelScopeInfo__Fields_FWDDECL)
#include <Modloader/app/structs/LabelScopeInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LabelScopeInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
