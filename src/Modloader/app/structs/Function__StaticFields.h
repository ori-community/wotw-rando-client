#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Function__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Function__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Function__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Function__StaticFields_DEFINED
struct XPathResultType__Enum__Array;
struct Function__StaticFields {
    struct XPathResultType__Enum__Array* ReturnTypes;
};
#endif
#if !defined(IL2CPP_STRUCT_Function__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Function__StaticFields_FWDDECL
#include <Modloader/app/structs/XPathResultType__Enum__Array.h>
#endif
#undef IL2CPP_STRUCT_Function__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Function__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Function__StaticFields_FWDDECL)
#include <Modloader/app/structs/Function__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Function__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
