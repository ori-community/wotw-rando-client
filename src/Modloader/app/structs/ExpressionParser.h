#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExpressionParser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExpressionParser_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpressionParser_DEFINED)
#include <Modloader/app/structs/ExpressionParser__Fields.h>
#if defined(IL2CPP_STRUCT_ExpressionParser__Fields_DEFINED)
#define IL2CPP_STRUCT_ExpressionParser_DEFINED
struct ExpressionParser__Class;
struct ExpressionParser {
    struct ExpressionParser__Class* klass;
    MonitorData* monitor;
    struct ExpressionParser__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExpressionParser_FWDDECL)
#define IL2CPP_STRUCT_ExpressionParser_FWDDECL
#include <Modloader/app/structs/ExpressionParser__Class.h>
#endif
#undef IL2CPP_STRUCT_ExpressionParser_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpressionParser_DEFINED) && !defined(IL2CPP_STRUCT_ExpressionParser_FWDDECL)
#include <Modloader/app/structs/ExpressionParser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExpressionParser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
