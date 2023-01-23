#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Expression_CatchBlockProxy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Expression_CatchBlockProxy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Expression_CatchBlockProxy__Fields_DEFINED)
#define IL2CPP_STRUCT_Expression_CatchBlockProxy__Fields_DEFINED
struct CatchBlock;
struct __declspec(align(8)) Expression_CatchBlockProxy__Fields {
    struct CatchBlock* _node;
};
#endif
#if !defined(IL2CPP_STRUCT_Expression_CatchBlockProxy__Fields_FWDDECL)
#define IL2CPP_STRUCT_Expression_CatchBlockProxy__Fields_FWDDECL
#include <Modloader/app/structs/CatchBlock.h>
#endif
#undef IL2CPP_STRUCT_Expression_CatchBlockProxy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Expression_CatchBlockProxy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Expression_CatchBlockProxy__Fields_FWDDECL)
#include <Modloader/app/structs/Expression_CatchBlockProxy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Expression_CatchBlockProxy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
