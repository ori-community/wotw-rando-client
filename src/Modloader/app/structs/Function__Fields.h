#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Function__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Function__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Function__Fields_DEFINED)
#include <Modloader/app/structs/Function_FunctionType__Enum.h>
#if defined(IL2CPP_STRUCT_Function_FunctionType__Enum_DEFINED)
#define IL2CPP_STRUCT_Function__Fields_DEFINED
struct ArrayList;
struct String;
struct __declspec(align(8)) Function__Fields {
    Function_FunctionType__Enum functionType;

    struct ArrayList* argumentList;
    struct String* name;
    struct String* prefix;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Function__Fields_FWDDECL)
#define IL2CPP_STRUCT_Function__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Function__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Function__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Function__Fields_FWDDECL)
#include <Modloader/app/structs/Function__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Function__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
