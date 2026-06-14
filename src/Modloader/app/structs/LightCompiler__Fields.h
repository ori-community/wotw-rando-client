#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightCompiler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightCompiler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCompiler__Fields_DEFINED)
#define IL2CPP_STRUCT_LightCompiler__Fields_DEFINED
struct InstructionList;
struct LocalVariables;
struct List_1_System_Linq_Expressions_Interpreter_DebugInfo_;
struct HybridReferenceDictionary_2_System_Linq_Expressions_LabelTarget_LabelInfo_;
struct LabelScopeInfo;
struct Stack_1_System_Linq_Expressions_ParameterExpression_;
struct LightCompiler;
struct StackGuard_1;
struct __declspec(align(8)) LightCompiler__Fields {
    struct InstructionList* _instructions;
    struct LocalVariables* _locals;
    struct List_1_System_Linq_Expressions_Interpreter_DebugInfo_* _debugInfos;
    struct HybridReferenceDictionary_2_System_Linq_Expressions_LabelTarget_LabelInfo_* _treeLabels;
    struct LabelScopeInfo* _labelBlock;
    struct Stack_1_System_Linq_Expressions_ParameterExpression_* _exceptionForRethrowStack;
    struct LightCompiler* _parent;
    struct StackGuard_1* _guard;
};
#endif
#if !defined(IL2CPP_STRUCT_LightCompiler__Fields_FWDDECL)
#define IL2CPP_STRUCT_LightCompiler__Fields_FWDDECL
#include <Modloader/app/structs/HybridReferenceDictionary_2_System_Linq_Expressions_LabelTarget_LabelInfo_.h>
#include <Modloader/app/structs/InstructionList.h>
#include <Modloader/app/structs/LabelScopeInfo.h>
#include <Modloader/app/structs/LightCompiler.h>
#include <Modloader/app/structs/List_1_System_Linq_Expressions_Interpreter_DebugInfo_.h>
#include <Modloader/app/structs/LocalVariables.h>
#include <Modloader/app/structs/StackGuard_1.h>
#include <Modloader/app/structs/Stack_1_System_Linq_Expressions_ParameterExpression_.h>
#endif
#undef IL2CPP_STRUCT_LightCompiler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCompiler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LightCompiler__Fields_FWDDECL)
#include <Modloader/app/structs/LightCompiler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightCompiler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
