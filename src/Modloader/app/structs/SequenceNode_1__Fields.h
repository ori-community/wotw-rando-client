#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SequenceNode_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SequenceNode_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SequenceNode_1__Fields_DEFINED)
#include <Modloader/app/structs/CompositeNode__Fields.h>
#if defined(IL2CPP_STRUCT_CompositeNode__Fields_DEFINED)
#define IL2CPP_STRUCT_SequenceNode_1__Fields_DEFINED
struct SequenceNode_1__Fields {
    struct CompositeNode__Fields _;
    bool IsRandom;
    bool CancelSequenceOnFailure;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SequenceNode_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_SequenceNode_1__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SequenceNode_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SequenceNode_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SequenceNode_1__Fields_FWDDECL)
#include <Modloader/app/structs/SequenceNode_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SequenceNode_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
