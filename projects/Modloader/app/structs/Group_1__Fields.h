#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Group_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Group_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Group_1__Fields_DEFINED)
#define IL2CPP_STRUCT_Group_1__Fields_DEFINED
struct AstNode;
struct __declspec(align(8)) Group_1__Fields {
    struct AstNode* groupNode;
};
#endif
#if !defined(IL2CPP_STRUCT_Group_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_Group_1__Fields_FWDDECL
#include <Modloader/app/structs/AstNode.h>
#endif
#undef IL2CPP_STRUCT_Group_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Group_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Group_1__Fields_FWDDECL)
#include <Modloader/app/structs/Group_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Group_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
