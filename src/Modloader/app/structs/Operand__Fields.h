#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Operand__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Operand__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Operand__Fields_DEFINED)
#include <Modloader/app/structs/XPathResultType__Enum.h>
#if defined(IL2CPP_STRUCT_XPathResultType__Enum_DEFINED)
#define IL2CPP_STRUCT_Operand__Fields_DEFINED
struct Object;
struct __declspec(align(8)) Operand__Fields {
    XPathResultType__Enum type;

    struct Object* val;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Operand__Fields_FWDDECL)
#define IL2CPP_STRUCT_Operand__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_Operand__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Operand__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Operand__Fields_FWDDECL)
#include <Modloader/app/structs/Operand__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Operand__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
