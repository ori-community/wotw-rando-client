#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XPathNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XPathNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathNode_DEFINED)
#define IL2CPP_STRUCT_XPathNode_DEFINED
struct XPathNodeInfoAtom;
struct String;
struct XPathNode {
    struct XPathNodeInfoAtom* info;
    uint16_t idxSibling;
    uint16_t idxParent;
    uint16_t idxSimilar;
    uint16_t posOffset;
    uint32_t props;
    struct String* value;
};
#endif
#if !defined(IL2CPP_STRUCT_XPathNode_FWDDECL)
#define IL2CPP_STRUCT_XPathNode_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XPathNodeInfoAtom.h>
#endif
#undef IL2CPP_STRUCT_XPathNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathNode_DEFINED) && !defined(IL2CPP_STRUCT_XPathNode_FWDDECL)
#include <Modloader/app/structs/XPathNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XPathNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
