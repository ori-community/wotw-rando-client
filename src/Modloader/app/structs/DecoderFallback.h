#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DecoderFallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DecoderFallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecoderFallback_DEFINED)
#include <Modloader/app/structs/DecoderFallback__Fields.h>
#if defined(IL2CPP_STRUCT_DecoderFallback__Fields_DEFINED)
#define IL2CPP_STRUCT_DecoderFallback_DEFINED
struct DecoderFallback__Class;
struct DecoderFallback {
    struct DecoderFallback__Class* klass;
    MonitorData* monitor;
    struct DecoderFallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DecoderFallback_FWDDECL)
#define IL2CPP_STRUCT_DecoderFallback_FWDDECL
#include <Modloader/app/structs/DecoderFallback__Class.h>
#endif
#undef IL2CPP_STRUCT_DecoderFallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecoderFallback_DEFINED) && !defined(IL2CPP_STRUCT_DecoderFallback_FWDDECL)
#include <Modloader/app/structs/DecoderFallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DecoderFallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
