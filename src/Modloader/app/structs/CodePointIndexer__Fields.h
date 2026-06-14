#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CodePointIndexer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CodePointIndexer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CodePointIndexer__Fields_DEFINED)
#define IL2CPP_STRUCT_CodePointIndexer__Fields_DEFINED
struct CodePointIndexer_TableRange__Array;
struct __declspec(align(8)) CodePointIndexer__Fields {
    struct CodePointIndexer_TableRange__Array* ranges;
    int32_t TotalCount;
    int32_t defaultIndex;
    int32_t defaultCP;
};
#endif
#if !defined(IL2CPP_STRUCT_CodePointIndexer__Fields_FWDDECL)
#define IL2CPP_STRUCT_CodePointIndexer__Fields_FWDDECL
#include <Modloader/app/structs/CodePointIndexer_TableRange__Array.h>
#endif
#undef IL2CPP_STRUCT_CodePointIndexer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CodePointIndexer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CodePointIndexer__Fields_FWDDECL)
#include <Modloader/app/structs/CodePointIndexer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CodePointIndexer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
