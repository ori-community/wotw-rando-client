#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlockExpression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlockExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlockExpression_DEFINED)
#define IL2CPP_STRUCT_BlockExpression_DEFINED
struct BlockExpression__Class;
struct BlockExpression {
    struct BlockExpression__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_BlockExpression_FWDDECL)
#define IL2CPP_STRUCT_BlockExpression_FWDDECL
#include <Modloader/app/structs/BlockExpression__Class.h>
#endif
#undef IL2CPP_STRUCT_BlockExpression_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlockExpression_DEFINED) && !defined(IL2CPP_STRUCT_BlockExpression_FWDDECL)
#include <Modloader/app/structs/BlockExpression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlockExpression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
