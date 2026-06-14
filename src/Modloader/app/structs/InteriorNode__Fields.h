#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteriorNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteriorNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteriorNode__Fields_DEFINED)
#define IL2CPP_STRUCT_InteriorNode__Fields_DEFINED
struct SyntaxTreeNode;
struct __declspec(align(8)) InteriorNode__Fields {
    struct SyntaxTreeNode* leftChild;
    struct SyntaxTreeNode* rightChild;
};
#endif
#if !defined(IL2CPP_STRUCT_InteriorNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_InteriorNode__Fields_FWDDECL
#include <Modloader/app/structs/SyntaxTreeNode.h>
#endif
#undef IL2CPP_STRUCT_InteriorNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteriorNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InteriorNode__Fields_FWDDECL)
#include <Modloader/app/structs/InteriorNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteriorNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
