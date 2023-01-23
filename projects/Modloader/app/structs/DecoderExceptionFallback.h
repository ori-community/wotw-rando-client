#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DecoderExceptionFallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DecoderExceptionFallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecoderExceptionFallback_DEFINED)
#include <Modloader/app/structs/DecoderExceptionFallback__Fields.h>
#if defined(IL2CPP_STRUCT_DecoderExceptionFallback__Fields_DEFINED)
#define IL2CPP_STRUCT_DecoderExceptionFallback_DEFINED
struct DecoderExceptionFallback__Class;
struct DecoderExceptionFallback {
    struct DecoderExceptionFallback__Class* klass;
    MonitorData* monitor;
    struct DecoderExceptionFallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DecoderExceptionFallback_FWDDECL)
#define IL2CPP_STRUCT_DecoderExceptionFallback_FWDDECL
#include <Modloader/app/structs/DecoderExceptionFallback__Class.h>
#endif
#undef IL2CPP_STRUCT_DecoderExceptionFallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecoderExceptionFallback_DEFINED) && !defined(IL2CPP_STRUCT_DecoderExceptionFallback_FWDDECL)
#include <Modloader/app/structs/DecoderExceptionFallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DecoderExceptionFallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
