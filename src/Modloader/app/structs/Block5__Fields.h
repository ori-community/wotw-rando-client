#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Block5__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Block5__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Block5__Fields_DEFINED)
#define IL2CPP_STRUCT_Block5__Fields_DEFINED
struct Object;
struct Expression;
struct __declspec(align(8)) Block5__Fields {
    struct Object* _arg0;
    struct Expression* _arg1;
    struct Expression* _arg2;
    struct Expression* _arg3;
    struct Expression* _arg4;
};
#endif
#if !defined(IL2CPP_STRUCT_Block5__Fields_FWDDECL)
#define IL2CPP_STRUCT_Block5__Fields_FWDDECL
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_Block5__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Block5__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Block5__Fields_FWDDECL)
#include <Modloader/app/structs/Block5__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Block5__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
