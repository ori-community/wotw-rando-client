#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Function_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Function_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Function_1__Fields_DEFINED)
#include <Modloader/app/structs/FunctionId__Enum.h>
#if defined(IL2CPP_STRUCT_FunctionId__Enum_DEFINED)
#define IL2CPP_STRUCT_Function_1__Fields_DEFINED
struct String;
struct Type;
struct Type__Array;
struct __declspec(align(8)) Function_1__Fields {
    struct String* _name;
    FunctionId__Enum _id;

    struct Type* _result;
    bool _isValidateArguments;
    bool _isVariantArgumentList;
    int32_t _argumentCount;
    struct Type__Array* _parameters;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Function_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_Function_1__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>
#endif
#undef IL2CPP_STRUCT_Function_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Function_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Function_1__Fields_FWDDECL)
#include <Modloader/app/structs/Function_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Function_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
