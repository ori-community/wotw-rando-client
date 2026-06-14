#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WWWTranscoder__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WWWTranscoder__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WWWTranscoder__StaticFields_DEFINED)
#define IL2CPP_STRUCT_WWWTranscoder__StaticFields_DEFINED
struct Byte__Array;
struct WWWTranscoder__StaticFields {
    struct Byte__Array* ucHexChars;
    struct Byte__Array* lcHexChars;
    uint8_t urlEscapeChar;
    struct Byte__Array* urlSpace;
    struct Byte__Array* dataSpace;
    struct Byte__Array* urlForbidden;
    uint8_t qpEscapeChar;
    struct Byte__Array* qpSpace;
    struct Byte__Array* qpForbidden;
};
#endif
#if !defined(IL2CPP_STRUCT_WWWTranscoder__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_WWWTranscoder__StaticFields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_WWWTranscoder__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WWWTranscoder__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_WWWTranscoder__StaticFields_FWDDECL)
#include <Modloader/app/structs/WWWTranscoder__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WWWTranscoder__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
