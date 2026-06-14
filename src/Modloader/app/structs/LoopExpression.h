#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoopExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoopExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoopExpression_DEFINED)
#include <Modloader/app/structs/LoopExpression__Fields.h>
#if defined(IL2CPP_STRUCT_LoopExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_LoopExpression_DEFINED
struct LoopExpression__Class;
struct LoopExpression {
    struct LoopExpression__Class* klass;
    MonitorData* monitor;
    struct LoopExpression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoopExpression_FWDDECL)
#define IL2CPP_STRUCT_LoopExpression_FWDDECL
#include <Modloader/app/structs/LoopExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_LoopExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoopExpression_DEFINED) && !defined(IL2CPP_STRUCT_LoopExpression_FWDDECL)
#include <Modloader/app/structs/LoopExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoopExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
