#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WWWTranscoder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WWWTranscoder_INITIALIZING
#if !defined(IL2CPP_STRUCT_WWWTranscoder_DEFINED)
#define IL2CPP_STRUCT_WWWTranscoder_DEFINED
struct WWWTranscoder__Class;
struct WWWTranscoder {
    struct WWWTranscoder__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_WWWTranscoder_FWDDECL)
#define IL2CPP_STRUCT_WWWTranscoder_FWDDECL
#include <Modloader/app/structs/WWWTranscoder__Class.h>
#endif
#undef IL2CPP_STRUCT_WWWTranscoder_INITIALIZING
#if !defined(IL2CPP_STRUCT_WWWTranscoder_DEFINED) && !defined(IL2CPP_STRUCT_WWWTranscoder_FWDDECL)
#include <Modloader/app/structs/WWWTranscoder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WWWTranscoder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
