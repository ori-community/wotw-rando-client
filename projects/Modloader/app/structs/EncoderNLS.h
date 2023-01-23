#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EncoderNLS_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EncoderNLS_INITIALIZING
#if !defined(IL2CPP_STRUCT_EncoderNLS_DEFINED)
#include <Modloader/app/structs/EncoderNLS__Fields.h>
#if defined(IL2CPP_STRUCT_EncoderNLS__Fields_DEFINED)
#define IL2CPP_STRUCT_EncoderNLS_DEFINED
struct EncoderNLS__Class;
struct EncoderNLS {
    struct EncoderNLS__Class* klass;
    MonitorData* monitor;
    struct EncoderNLS__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EncoderNLS_FWDDECL)
#define IL2CPP_STRUCT_EncoderNLS_FWDDECL
#include <Modloader/app/structs/EncoderNLS__Class.h>
#endif
#undef IL2CPP_STRUCT_EncoderNLS_INITIALIZING
#if !defined(IL2CPP_STRUCT_EncoderNLS_DEFINED) && !defined(IL2CPP_STRUCT_EncoderNLS_FWDDECL)
#include <Modloader/app/structs/EncoderNLS.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EncoderNLS.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
