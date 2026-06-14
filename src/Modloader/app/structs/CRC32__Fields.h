#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CRC32__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CRC32__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CRC32__Fields_DEFINED)
#define IL2CPP_STRUCT_CRC32__Fields_DEFINED
struct UInt32__Array;
struct __declspec(align(8)) CRC32__Fields {
    uint32_t dwPolynomial;
    int64_t _TotalBytesRead;
    bool reverseBits;
    struct UInt32__Array* crc32Table;
    uint32_t _register;
};
#endif
#if !defined(IL2CPP_STRUCT_CRC32__Fields_FWDDECL)
#define IL2CPP_STRUCT_CRC32__Fields_FWDDECL
#include <Modloader/app/structs/UInt32__Array.h>
#endif
#undef IL2CPP_STRUCT_CRC32__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CRC32__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CRC32__Fields_FWDDECL)
#include <Modloader/app/structs/CRC32__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CRC32__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
