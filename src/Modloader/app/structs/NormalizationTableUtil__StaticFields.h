#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NormalizationTableUtil__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NormalizationTableUtil__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NormalizationTableUtil__StaticFields_DEFINED)
#define IL2CPP_STRUCT_NormalizationTableUtil__StaticFields_DEFINED
struct CodePointIndexer;
struct NormalizationTableUtil__StaticFields {
    struct CodePointIndexer* Prop;
    struct CodePointIndexer* Map;
    struct CodePointIndexer* Combining;
    struct CodePointIndexer* Composite;
    struct CodePointIndexer* Helper;
};
#endif
#if !defined(IL2CPP_STRUCT_NormalizationTableUtil__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_NormalizationTableUtil__StaticFields_FWDDECL
#include <Modloader/app/structs/CodePointIndexer.h>
#endif
#undef IL2CPP_STRUCT_NormalizationTableUtil__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NormalizationTableUtil__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_NormalizationTableUtil__StaticFields_FWDDECL)
#include <Modloader/app/structs/NormalizationTableUtil__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NormalizationTableUtil__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
