#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LabelInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LabelInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LabelInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_LabelInfo__Fields_DEFINED
struct LabelTarget;
struct BranchLabel;
struct Object;
struct List_1_System_Linq_Expressions_Interpreter_LabelScopeInfo_;
struct __declspec(align(8)) LabelInfo__Fields {
    struct LabelTarget* _node;
    struct BranchLabel* _label;
    struct Object* _definitions;
    struct List_1_System_Linq_Expressions_Interpreter_LabelScopeInfo_* _references;
    bool _acrossBlockJump;
};
#endif
#if !defined(IL2CPP_STRUCT_LabelInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_LabelInfo__Fields_FWDDECL
#include <Modloader/app/structs/BranchLabel.h>
#include <Modloader/app/structs/LabelTarget.h>
#include <Modloader/app/structs/List_1_System_Linq_Expressions_Interpreter_LabelScopeInfo_.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_LabelInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LabelInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LabelInfo__Fields_FWDDECL)
#include <Modloader/app/structs/LabelInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LabelInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
