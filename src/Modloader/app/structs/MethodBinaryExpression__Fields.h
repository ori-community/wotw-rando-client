#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MethodBinaryExpression__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MethodBinaryExpression__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodBinaryExpression__Fields_DEFINED)
#include <Modloader/app/structs/SimpleBinaryExpression__Fields.h>
#if defined(IL2CPP_STRUCT_SimpleBinaryExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_MethodBinaryExpression__Fields_DEFINED
struct MethodInfo_1;
struct MethodBinaryExpression__Fields {
    struct SimpleBinaryExpression__Fields _;
    struct MethodInfo_1* _method;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MethodBinaryExpression__Fields_FWDDECL)
#define IL2CPP_STRUCT_MethodBinaryExpression__Fields_FWDDECL
#include <Modloader/app/structs/MethodInfo_1.h>
#endif
#undef IL2CPP_STRUCT_MethodBinaryExpression__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodBinaryExpression__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MethodBinaryExpression__Fields_FWDDECL)
#include <Modloader/app/structs/MethodBinaryExpression__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MethodBinaryExpression__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
