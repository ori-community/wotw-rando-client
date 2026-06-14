#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DecoderFallbackException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DecoderFallbackException_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecoderFallbackException_DEFINED)
#include <Modloader/app/structs/DecoderFallbackException__Fields.h>
#if defined(IL2CPP_STRUCT_DecoderFallbackException__Fields_DEFINED)
#define IL2CPP_STRUCT_DecoderFallbackException_DEFINED
struct DecoderFallbackException__Class;
struct DecoderFallbackException {
    struct DecoderFallbackException__Class* klass;
    MonitorData* monitor;
    struct DecoderFallbackException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DecoderFallbackException_FWDDECL)
#define IL2CPP_STRUCT_DecoderFallbackException_FWDDECL
#include <Modloader/app/structs/DecoderFallbackException__Class.h>
#endif
#undef IL2CPP_STRUCT_DecoderFallbackException_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecoderFallbackException_DEFINED) && !defined(IL2CPP_STRUCT_DecoderFallbackException_FWDDECL)
#include <Modloader/app/structs/DecoderFallbackException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DecoderFallbackException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
