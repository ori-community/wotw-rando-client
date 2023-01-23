#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EncoderFallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EncoderFallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_EncoderFallback_DEFINED)
#include <Modloader/app/structs/EncoderFallback__Fields.h>
#if defined(IL2CPP_STRUCT_EncoderFallback__Fields_DEFINED)
#define IL2CPP_STRUCT_EncoderFallback_DEFINED
struct EncoderFallback__Class;
struct EncoderFallback {
    struct EncoderFallback__Class* klass;
    MonitorData* monitor;
    struct EncoderFallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EncoderFallback_FWDDECL)
#define IL2CPP_STRUCT_EncoderFallback_FWDDECL
#include <Modloader/app/structs/EncoderFallback__Class.h>
#endif
#undef IL2CPP_STRUCT_EncoderFallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_EncoderFallback_DEFINED) && !defined(IL2CPP_STRUCT_EncoderFallback_FWDDECL)
#include <Modloader/app/structs/EncoderFallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EncoderFallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
