#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugViewWriter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugViewWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugViewWriter__Fields_DEFINED)
#include <Modloader/app/structs/DebugViewWriter_Flow__Enum.h>
#if defined(IL2CPP_STRUCT_DebugViewWriter_Flow__Enum_DEFINED)
#define IL2CPP_STRUCT_DebugViewWriter__Fields_DEFINED
struct TextWriter;
struct Stack_1_System_Int32_;
struct Queue_1_System_Linq_Expressions_LambdaExpression_;
struct Dictionary_2_System_Linq_Expressions_LambdaExpression_System_Int32_;
struct Dictionary_2_System_Linq_Expressions_ParameterExpression_System_Int32_;
struct Dictionary_2_System_Linq_Expressions_LabelTarget_System_Int32_;
struct __declspec(align(8)) DebugViewWriter__Fields {
    struct TextWriter* _out;
    int32_t _column;
    struct Stack_1_System_Int32_* _stack;
    int32_t _delta;
    DebugViewWriter_Flow__Enum _flow;

    struct Queue_1_System_Linq_Expressions_LambdaExpression_* _lambdas;
    struct Dictionary_2_System_Linq_Expressions_LambdaExpression_System_Int32_* _lambdaIds;
    struct Dictionary_2_System_Linq_Expressions_ParameterExpression_System_Int32_* _paramIds;
    struct Dictionary_2_System_Linq_Expressions_LabelTarget_System_Int32_* _labelIds;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugViewWriter__Fields_FWDDECL)
#define IL2CPP_STRUCT_DebugViewWriter__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Linq_Expressions_LabelTarget_System_Int32_.h>
#include <Modloader/app/structs/Dictionary_2_System_Linq_Expressions_LambdaExpression_System_Int32_.h>
#include <Modloader/app/structs/Dictionary_2_System_Linq_Expressions_ParameterExpression_System_Int32_.h>
#include <Modloader/app/structs/Queue_1_System_Linq_Expressions_LambdaExpression_.h>
#include <Modloader/app/structs/Stack_1_System_Int32_.h>
#include <Modloader/app/structs/TextWriter.h>
#endif
#undef IL2CPP_STRUCT_DebugViewWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugViewWriter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DebugViewWriter__Fields_FWDDECL)
#include <Modloader/app/structs/DebugViewWriter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugViewWriter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
