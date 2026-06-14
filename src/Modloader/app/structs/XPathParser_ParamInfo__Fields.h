#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XPathParser_ParamInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XPathParser_ParamInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathParser_ParamInfo__Fields_DEFINED)
#include <Modloader/app/structs/Function_FunctionType__Enum.h>
#if defined(IL2CPP_STRUCT_Function_FunctionType__Enum_DEFINED)
#define IL2CPP_STRUCT_XPathParser_ParamInfo__Fields_DEFINED
struct XPathResultType__Enum__Array;
struct __declspec(align(8)) XPathParser_ParamInfo__Fields {
    Function_FunctionType__Enum ftype;

    int32_t minargs;
    int32_t maxargs;
    struct XPathResultType__Enum__Array* argTypes;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XPathParser_ParamInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_XPathParser_ParamInfo__Fields_FWDDECL
#include <Modloader/app/structs/XPathResultType__Enum__Array.h>
#endif
#undef IL2CPP_STRUCT_XPathParser_ParamInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathParser_ParamInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XPathParser_ParamInfo__Fields_FWDDECL)
#include <Modloader/app/structs/XPathParser_ParamInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XPathParser_ParamInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
