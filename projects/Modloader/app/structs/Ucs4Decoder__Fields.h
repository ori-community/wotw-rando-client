#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Ucs4Decoder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Ucs4Decoder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ucs4Decoder__Fields_DEFINED)
#include <Modloader/app/structs/Decoder__Fields.h>
#if defined(IL2CPP_STRUCT_Decoder__Fields_DEFINED)
#define IL2CPP_STRUCT_Ucs4Decoder__Fields_DEFINED
struct Byte__Array;
struct Ucs4Decoder__Fields {
    struct Decoder__Fields _;
    struct Byte__Array* lastBytes;
    int32_t lastBytesCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Ucs4Decoder__Fields_FWDDECL)
#define IL2CPP_STRUCT_Ucs4Decoder__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_Ucs4Decoder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ucs4Decoder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Ucs4Decoder__Fields_FWDDECL)
#include <Modloader/app/structs/Ucs4Decoder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Ucs4Decoder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
