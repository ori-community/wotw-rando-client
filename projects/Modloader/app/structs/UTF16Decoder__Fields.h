#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UTF16Decoder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UTF16Decoder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UTF16Decoder__Fields_DEFINED)
#include <Modloader/app/structs/Decoder__Fields.h>
#if defined(IL2CPP_STRUCT_Decoder__Fields_DEFINED)
#define IL2CPP_STRUCT_UTF16Decoder__Fields_DEFINED
struct UTF16Decoder__Fields {
    struct Decoder__Fields _;
    bool bigEndian;
    int32_t lastByte;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UTF16Decoder__Fields_FWDDECL)
#define IL2CPP_STRUCT_UTF16Decoder__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_UTF16Decoder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UTF16Decoder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UTF16Decoder__Fields_FWDDECL)
#include <Modloader/app/structs/UTF16Decoder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UTF16Decoder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
