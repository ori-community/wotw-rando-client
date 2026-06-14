#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Decoder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Decoder_INITIALIZING
#if !defined(IL2CPP_STRUCT_Decoder_DEFINED)
#include <Modloader/app/structs/Decoder__Fields.h>
#if defined(IL2CPP_STRUCT_Decoder__Fields_DEFINED)
#define IL2CPP_STRUCT_Decoder_DEFINED
struct Decoder__Class;
struct Decoder {
    struct Decoder__Class* klass;
    MonitorData* monitor;
    struct Decoder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Decoder_FWDDECL)
#define IL2CPP_STRUCT_Decoder_FWDDECL
#include <Modloader/app/structs/Decoder__Class.h>
#endif
#undef IL2CPP_STRUCT_Decoder_INITIALIZING
#if !defined(IL2CPP_STRUCT_Decoder_DEFINED) && !defined(IL2CPP_STRUCT_Decoder_FWDDECL)
#include <Modloader/app/structs/Decoder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Decoder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
