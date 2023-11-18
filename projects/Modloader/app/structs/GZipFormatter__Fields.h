#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GZipFormatter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GZipFormatter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GZipFormatter__Fields_DEFINED)
#define IL2CPP_STRUCT_GZipFormatter__Fields_DEFINED
struct Byte__Array;
struct __declspec(align(8)) GZipFormatter__Fields {
    struct Byte__Array* headerBytes;
    uint32_t _crc32;
    int64_t _inputStreamSizeModulo;
};
#endif
#if !defined(IL2CPP_STRUCT_GZipFormatter__Fields_FWDDECL)
#define IL2CPP_STRUCT_GZipFormatter__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_GZipFormatter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GZipFormatter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GZipFormatter__Fields_FWDDECL)
#include <Modloader/app/structs/GZipFormatter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GZipFormatter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
