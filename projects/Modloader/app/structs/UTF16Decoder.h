#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UTF16Decoder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UTF16Decoder_INITIALIZING
#if !defined(IL2CPP_STRUCT_UTF16Decoder_DEFINED)
#include <Modloader/app/structs/UTF16Decoder__Fields.h>
#if defined(IL2CPP_STRUCT_UTF16Decoder__Fields_DEFINED)
#define IL2CPP_STRUCT_UTF16Decoder_DEFINED
struct UTF16Decoder__Class;
struct UTF16Decoder {
    struct UTF16Decoder__Class* klass;
    MonitorData* monitor;
    struct UTF16Decoder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UTF16Decoder_FWDDECL)
#define IL2CPP_STRUCT_UTF16Decoder_FWDDECL
#include <Modloader/app/structs/UTF16Decoder__Class.h>
#endif
#undef IL2CPP_STRUCT_UTF16Decoder_INITIALIZING
#if !defined(IL2CPP_STRUCT_UTF16Decoder_DEFINED) && !defined(IL2CPP_STRUCT_UTF16Decoder_FWDDECL)
#include <Modloader/app/structs/UTF16Decoder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UTF16Decoder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
