#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DialogGraph_DialogGraphContext__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DialogGraph_DialogGraphContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DialogGraph_DialogGraphContext__Fields_DEFINED)
#define IL2CPP_STRUCT_DialogGraph_DialogGraphContext__Fields_DEFINED
struct DialogGraph;
struct IDialogNode;
struct __declspec(align(8)) DialogGraph_DialogGraphContext__Fields {
    struct DialogGraph* Graph;
    struct IDialogNode* CurrentNode;
};
#endif
#if !defined(IL2CPP_STRUCT_DialogGraph_DialogGraphContext__Fields_FWDDECL)
#define IL2CPP_STRUCT_DialogGraph_DialogGraphContext__Fields_FWDDECL
#include <Modloader/app/structs/DialogGraph.h>
#include <Modloader/app/structs/IDialogNode.h>
#endif
#undef IL2CPP_STRUCT_DialogGraph_DialogGraphContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DialogGraph_DialogGraphContext__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DialogGraph_DialogGraphContext__Fields_FWDDECL)
#include <Modloader/app/structs/DialogGraph_DialogGraphContext__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DialogGraph_DialogGraphContext__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
