#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HuffmanTree_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HuffmanTree_INITIALIZING
#if !defined(IL2CPP_STRUCT_HuffmanTree_DEFINED)
#include <Modloader/app/structs/HuffmanTree__Fields.h>
#if defined(IL2CPP_STRUCT_HuffmanTree__Fields_DEFINED)
#define IL2CPP_STRUCT_HuffmanTree_DEFINED
struct HuffmanTree__Class;
struct HuffmanTree {
    struct HuffmanTree__Class* klass;
    MonitorData* monitor;
    struct HuffmanTree__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HuffmanTree_FWDDECL)
#define IL2CPP_STRUCT_HuffmanTree_FWDDECL
#include <Modloader/app/structs/HuffmanTree__Class.h>
#endif
#undef IL2CPP_STRUCT_HuffmanTree_INITIALIZING
#if !defined(IL2CPP_STRUCT_HuffmanTree_DEFINED) && !defined(IL2CPP_STRUCT_HuffmanTree_FWDDECL)
#include <Modloader/app/structs/HuffmanTree.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HuffmanTree.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
