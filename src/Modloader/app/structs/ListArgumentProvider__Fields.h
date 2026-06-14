#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListArgumentProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListArgumentProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListArgumentProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_ListArgumentProvider__Fields_DEFINED
struct IArgumentProvider;
struct Expression;
struct __declspec(align(8)) ListArgumentProvider__Fields {
    struct IArgumentProvider* _provider;
    struct Expression* _arg0;
};
#endif
#if !defined(IL2CPP_STRUCT_ListArgumentProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_ListArgumentProvider__Fields_FWDDECL
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/IArgumentProvider.h>
#endif
#undef IL2CPP_STRUCT_ListArgumentProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListArgumentProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ListArgumentProvider__Fields_FWDDECL)
#include <Modloader/app/structs/ListArgumentProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListArgumentProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
