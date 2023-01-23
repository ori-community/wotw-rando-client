#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AtlasPrewarmOperation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AtlasPrewarmOperation_INITIALIZING
#if !defined(IL2CPP_STRUCT_AtlasPrewarmOperation_DEFINED)
#include <Modloader/app/structs/AtlasPrewarmOperation__Fields.h>
#if defined(IL2CPP_STRUCT_AtlasPrewarmOperation__Fields_DEFINED)
#define IL2CPP_STRUCT_AtlasPrewarmOperation_DEFINED
struct AtlasPrewarmOperation__Class;
struct AtlasPrewarmOperation {
    struct AtlasPrewarmOperation__Class* klass;
    MonitorData* monitor;
    struct AtlasPrewarmOperation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AtlasPrewarmOperation_FWDDECL)
#define IL2CPP_STRUCT_AtlasPrewarmOperation_FWDDECL
#include <Modloader/app/structs/AtlasPrewarmOperation__Class.h>
#endif
#undef IL2CPP_STRUCT_AtlasPrewarmOperation_INITIALIZING
#if !defined(IL2CPP_STRUCT_AtlasPrewarmOperation_DEFINED) && !defined(IL2CPP_STRUCT_AtlasPrewarmOperation_FWDDECL)
#include <Modloader/app/structs/AtlasPrewarmOperation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AtlasPrewarmOperation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
