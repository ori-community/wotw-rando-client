#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Filter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Filter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Filter__Fields_DEFINED)
#define IL2CPP_STRUCT_Filter__Fields_DEFINED
struct AstNode;
struct __declspec(align(8)) Filter__Fields {
    struct AstNode* input;
    struct AstNode* condition;
};
#endif
#if !defined(IL2CPP_STRUCT_Filter__Fields_FWDDECL)
#define IL2CPP_STRUCT_Filter__Fields_FWDDECL
#include <Modloader/app/structs/AstNode.h>
#endif
#undef IL2CPP_STRUCT_Filter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Filter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Filter__Fields_FWDDECL)
#include <Modloader/app/structs/Filter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Filter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
