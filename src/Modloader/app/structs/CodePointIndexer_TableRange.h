#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CodePointIndexer_TableRange_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CodePointIndexer_TableRange_INITIALIZING
#if !defined(IL2CPP_STRUCT_CodePointIndexer_TableRange_DEFINED)
#define IL2CPP_STRUCT_CodePointIndexer_TableRange_DEFINED
struct CodePointIndexer_TableRange {
    int32_t Start;
    int32_t End;
    int32_t Count;
    int32_t IndexStart;
    int32_t IndexEnd;
};
#endif
#if !defined(IL2CPP_STRUCT_CodePointIndexer_TableRange_FWDDECL)
#define IL2CPP_STRUCT_CodePointIndexer_TableRange_FWDDECL
#endif
#undef IL2CPP_STRUCT_CodePointIndexer_TableRange_INITIALIZING
#if !defined(IL2CPP_STRUCT_CodePointIndexer_TableRange_DEFINED) && !defined(IL2CPP_STRUCT_CodePointIndexer_TableRange_FWDDECL)
#include <Modloader/app/structs/CodePointIndexer_TableRange.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CodePointIndexer_TableRange.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
