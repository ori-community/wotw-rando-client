#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OutputBuffer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OutputBuffer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OutputBuffer__Fields_DEFINED)
#define IL2CPP_STRUCT_OutputBuffer__Fields_DEFINED
struct Byte__Array;
struct __declspec(align(8)) OutputBuffer__Fields {
    struct Byte__Array* byteBuffer;
    int32_t pos;
    uint32_t bitBuf;
    int32_t bitCount;
};
#endif
#if !defined(IL2CPP_STRUCT_OutputBuffer__Fields_FWDDECL)
#define IL2CPP_STRUCT_OutputBuffer__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_OutputBuffer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OutputBuffer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OutputBuffer__Fields_FWDDECL)
#include <Modloader/app/structs/OutputBuffer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OutputBuffer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
