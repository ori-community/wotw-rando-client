#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AtlasPrewarmOperation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AtlasPrewarmOperation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AtlasPrewarmOperation__Fields_DEFINED)
#include <Modloader/app/structs/BasePrewarmOperation__Fields.h>
#if defined(IL2CPP_STRUCT_BasePrewarmOperation__Fields_DEFINED)
#define IL2CPP_STRUCT_AtlasPrewarmOperation__Fields_DEFINED
struct AsyncOperation_1;
struct AtlasPrewarmOperation__Fields {
    struct BasePrewarmOperation__Fields _;
    struct AsyncOperation_1* m_operation;
    bool m_shouldUnload;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AtlasPrewarmOperation__Fields_FWDDECL)
#define IL2CPP_STRUCT_AtlasPrewarmOperation__Fields_FWDDECL
#include <Modloader/app/structs/AsyncOperation_1.h>
#endif
#undef IL2CPP_STRUCT_AtlasPrewarmOperation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AtlasPrewarmOperation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AtlasPrewarmOperation__Fields_FWDDECL)
#include <Modloader/app/structs/AtlasPrewarmOperation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AtlasPrewarmOperation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
