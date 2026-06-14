#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DecoderNLS_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DecoderNLS_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecoderNLS_DEFINED)
#include <Modloader/app/structs/DecoderNLS__Fields.h>
#if defined(IL2CPP_STRUCT_DecoderNLS__Fields_DEFINED)
#define IL2CPP_STRUCT_DecoderNLS_DEFINED
struct DecoderNLS__Class;
struct DecoderNLS {
    struct DecoderNLS__Class* klass;
    MonitorData* monitor;
    struct DecoderNLS__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DecoderNLS_FWDDECL)
#define IL2CPP_STRUCT_DecoderNLS_FWDDECL
#include <Modloader/app/structs/DecoderNLS__Class.h>
#endif
#undef IL2CPP_STRUCT_DecoderNLS_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecoderNLS_DEFINED) && !defined(IL2CPP_STRUCT_DecoderNLS_FWDDECL)
#include <Modloader/app/structs/DecoderNLS.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DecoderNLS.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
