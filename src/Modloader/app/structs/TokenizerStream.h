#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TokenizerStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TokenizerStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_TokenizerStream_DEFINED)
#include <Modloader/app/structs/TokenizerStream__Fields.h>
#if defined(IL2CPP_STRUCT_TokenizerStream__Fields_DEFINED)
#define IL2CPP_STRUCT_TokenizerStream_DEFINED
struct TokenizerStream__Class;
struct TokenizerStream {
    struct TokenizerStream__Class* klass;
    MonitorData* monitor;
    struct TokenizerStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TokenizerStream_FWDDECL)
#define IL2CPP_STRUCT_TokenizerStream_FWDDECL
#include <Modloader/app/structs/TokenizerStream__Class.h>
#endif
#undef IL2CPP_STRUCT_TokenizerStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_TokenizerStream_DEFINED) && !defined(IL2CPP_STRUCT_TokenizerStream_FWDDECL)
#include <Modloader/app/structs/TokenizerStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TokenizerStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
