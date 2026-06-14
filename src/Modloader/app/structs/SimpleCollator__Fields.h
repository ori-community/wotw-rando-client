#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleCollator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleCollator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleCollator__Fields_DEFINED)
#define IL2CPP_STRUCT_SimpleCollator__Fields_DEFINED
struct TextInfo;
struct CodePointIndexer;
struct Contraction__Array;
struct Level2Map__Array;
struct Byte__Array;
struct __declspec(align(8)) SimpleCollator__Fields {
    struct TextInfo* textInfo;
    struct CodePointIndexer* cjkIndexer;
    struct Contraction__Array* contractions;
    struct Level2Map__Array* level2Maps;
    struct Byte__Array* unsafeFlags;
    uint8_t* cjkCatTable;
    uint8_t* cjkLv1Table;
    uint8_t* cjkLv2Table;
    struct CodePointIndexer* cjkLv2Indexer;
    int32_t lcid;
    bool frenchSort;
};
#endif
#if !defined(IL2CPP_STRUCT_SimpleCollator__Fields_FWDDECL)
#define IL2CPP_STRUCT_SimpleCollator__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CodePointIndexer.h>
#include <Modloader/app/structs/Contraction__Array.h>
#include <Modloader/app/structs/Level2Map__Array.h>
#include <Modloader/app/structs/TextInfo.h>
#endif
#undef IL2CPP_STRUCT_SimpleCollator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleCollator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SimpleCollator__Fields_FWDDECL)
#include <Modloader/app/structs/SimpleCollator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleCollator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
