#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MD5CryptoServiceProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MD5CryptoServiceProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MD5CryptoServiceProvider__Fields_DEFINED)
#include <Modloader/app/structs/MD5__Fields.h>
#if defined(IL2CPP_STRUCT_MD5__Fields_DEFINED)
#define IL2CPP_STRUCT_MD5CryptoServiceProvider__Fields_DEFINED
struct UInt32__Array;
struct Byte__Array;
struct MD5CryptoServiceProvider__Fields {
    struct MD5__Fields _;
    struct UInt32__Array* _H;
    struct UInt32__Array* buff;
    uint64_t count;
    struct Byte__Array* _ProcessingBuffer;
    int32_t _ProcessingBufferCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MD5CryptoServiceProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_MD5CryptoServiceProvider__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/UInt32__Array.h>
#endif
#undef IL2CPP_STRUCT_MD5CryptoServiceProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MD5CryptoServiceProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MD5CryptoServiceProvider__Fields_FWDDECL)
#include <Modloader/app/structs/MD5CryptoServiceProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MD5CryptoServiceProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
