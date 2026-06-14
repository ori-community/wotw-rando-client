#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SweepLine_SplayNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SweepLine_SplayNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SweepLine_SplayNode__Fields_DEFINED)
#include <Modloader/app/structs/Otri.h>
#if defined(IL2CPP_STRUCT_Otri_DEFINED)
#define IL2CPP_STRUCT_SweepLine_SplayNode__Fields_DEFINED
struct Vertex;
struct SweepLine_SplayNode;
struct __declspec(align(8)) SweepLine_SplayNode__Fields {
    struct Otri keyedge;
    struct Vertex* keydest;
    struct SweepLine_SplayNode* lchild;
    struct SweepLine_SplayNode* rchild;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SweepLine_SplayNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_SweepLine_SplayNode__Fields_FWDDECL
#include <Modloader/app/structs/SweepLine_SplayNode.h>
#include <Modloader/app/structs/Vertex.h>
#endif
#undef IL2CPP_STRUCT_SweepLine_SplayNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SweepLine_SplayNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SweepLine_SplayNode__Fields_FWDDECL)
#include <Modloader/app/structs/SweepLine_SplayNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SweepLine_SplayNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
