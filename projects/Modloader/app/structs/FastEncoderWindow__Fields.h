#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FastEncoderWindow__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FastEncoderWindow__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FastEncoderWindow__Fields_DEFINED)
#define IL2CPP_STRUCT_FastEncoderWindow__Fields_DEFINED
struct Byte__Array;
struct UInt16__Array;
struct __declspec(align(8)) FastEncoderWindow__Fields {
    struct Byte__Array* window;
    int32_t bufPos;
    int32_t bufEnd;
    struct UInt16__Array* prev;
    struct UInt16__Array* lookup;
};
#endif
#if !defined(IL2CPP_STRUCT_FastEncoderWindow__Fields_FWDDECL)
#define IL2CPP_STRUCT_FastEncoderWindow__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/UInt16__Array.h>
#endif
#undef IL2CPP_STRUCT_FastEncoderWindow__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FastEncoderWindow__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FastEncoderWindow__Fields_FWDDECL)
#include <Modloader/app/structs/FastEncoderWindow__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FastEncoderWindow__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
