#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeafRangeNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeafRangeNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeafRangeNode__Fields_DEFINED)
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/LeafNode__Fields.h>
#if defined(IL2CPP_STRUCT_LeafNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_Decimal_DEFINED)
#define IL2CPP_STRUCT_LeafRangeNode__Fields_DEFINED
struct BitSet;
struct LeafRangeNode__Fields {
    struct LeafNode__Fields _;
    struct Decimal min;
    struct Decimal max;
    struct BitSet* nextIteration;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeafRangeNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_LeafRangeNode__Fields_FWDDECL
#include <Modloader/app/structs/BitSet.h>
#endif
#undef IL2CPP_STRUCT_LeafRangeNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeafRangeNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LeafRangeNode__Fields_FWDDECL)
#include <Modloader/app/structs/LeafRangeNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeafRangeNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
