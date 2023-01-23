#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CodePointIndexer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CodePointIndexer_INITIALIZING
#if !defined(IL2CPP_STRUCT_CodePointIndexer_DEFINED)
#include <Modloader/app/structs/CodePointIndexer__Fields.h>
#if defined(IL2CPP_STRUCT_CodePointIndexer__Fields_DEFINED)
#define IL2CPP_STRUCT_CodePointIndexer_DEFINED
struct CodePointIndexer__Class;
struct CodePointIndexer {
    struct CodePointIndexer__Class* klass;
    MonitorData* monitor;
    struct CodePointIndexer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CodePointIndexer_FWDDECL)
#define IL2CPP_STRUCT_CodePointIndexer_FWDDECL
#include <Modloader/app/structs/CodePointIndexer__Class.h>
#endif
#undef IL2CPP_STRUCT_CodePointIndexer_INITIALIZING
#if !defined(IL2CPP_STRUCT_CodePointIndexer_DEFINED) && !defined(IL2CPP_STRUCT_CodePointIndexer_FWDDECL)
#include <Modloader/app/structs/CodePointIndexer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CodePointIndexer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
