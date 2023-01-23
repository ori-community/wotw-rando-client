#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SequenceNode_SequenceConstructPosContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SequenceNode_SequenceConstructPosContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_SequenceNode_SequenceConstructPosContext_DEFINED)
#define IL2CPP_STRUCT_SequenceNode_SequenceConstructPosContext_DEFINED
struct SequenceNode;
struct BitSet;
struct SequenceNode_SequenceConstructPosContext {
    struct SequenceNode* this_;
    struct BitSet* firstpos;
    struct BitSet* lastpos;
    struct BitSet* lastposLeft;
    struct BitSet* firstposRight;
};
#endif
#if !defined(IL2CPP_STRUCT_SequenceNode_SequenceConstructPosContext_FWDDECL)
#define IL2CPP_STRUCT_SequenceNode_SequenceConstructPosContext_FWDDECL
#include <Modloader/app/structs/BitSet.h>
#include <Modloader/app/structs/SequenceNode.h>
#endif
#undef IL2CPP_STRUCT_SequenceNode_SequenceConstructPosContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_SequenceNode_SequenceConstructPosContext_DEFINED) && !defined(IL2CPP_STRUCT_SequenceNode_SequenceConstructPosContext_FWDDECL)
#include <Modloader/app/structs/SequenceNode_SequenceConstructPosContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SequenceNode_SequenceConstructPosContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
