#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Encoding__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Encoding__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Encoding__Fields_DEFINED)
#define IL2CPP_STRUCT_Encoding__Fields_DEFINED
struct CodePageDataItem;
struct EncoderFallback;
struct DecoderFallback;
struct __declspec(align(8)) Encoding__Fields {
    int32_t m_codePage;
    struct CodePageDataItem* dataItem;
    bool m_deserializedFromEverett;
    bool m_isReadOnly;
    struct EncoderFallback* encoderFallback;
    struct DecoderFallback* decoderFallback;
};
#endif
#if !defined(IL2CPP_STRUCT_Encoding__Fields_FWDDECL)
#define IL2CPP_STRUCT_Encoding__Fields_FWDDECL
#include <Modloader/app/structs/CodePageDataItem.h>
#include <Modloader/app/structs/DecoderFallback.h>
#include <Modloader/app/structs/EncoderFallback.h>
#endif
#undef IL2CPP_STRUCT_Encoding__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Encoding__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Encoding__Fields_FWDDECL)
#include <Modloader/app/structs/Encoding__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Encoding__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
