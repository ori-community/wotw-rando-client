#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RangeContentValidator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RangeContentValidator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RangeContentValidator__Fields_DEFINED)
#include <Modloader/app/structs/ContentValidator__Fields.h>
#if defined(IL2CPP_STRUCT_ContentValidator__Fields_DEFINED)
#define IL2CPP_STRUCT_RangeContentValidator__Fields_DEFINED
struct BitSet;
struct BitSet__Array;
struct SymbolsDictionary;
struct Positions;
struct RangeContentValidator__Fields {
    struct ContentValidator__Fields _;
    struct BitSet* firstpos;
    struct BitSet__Array* followpos;
    struct BitSet* positionsWithRangeTerminals;
    struct SymbolsDictionary* symbols;
    struct Positions* positions;
    int32_t minMaxNodesCount;
    int32_t endMarkerPos;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RangeContentValidator__Fields_FWDDECL)
#define IL2CPP_STRUCT_RangeContentValidator__Fields_FWDDECL
#include <Modloader/app/structs/BitSet.h>
#include <Modloader/app/structs/BitSet__Array.h>
#include <Modloader/app/structs/Positions.h>
#include <Modloader/app/structs/SymbolsDictionary.h>
#endif
#undef IL2CPP_STRUCT_RangeContentValidator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RangeContentValidator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RangeContentValidator__Fields_FWDDECL)
#include <Modloader/app/structs/RangeContentValidator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RangeContentValidator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
