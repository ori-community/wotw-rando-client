#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SHA1Internal__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SHA1Internal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SHA1Internal__Fields_DEFINED)
#define IL2CPP_STRUCT_SHA1Internal__Fields_DEFINED
struct UInt32__Array;
struct Byte__Array;
struct __declspec(align(8)) SHA1Internal__Fields {
    struct UInt32__Array* _H;
    uint64_t count;
    struct Byte__Array* _ProcessingBuffer;
    int32_t _ProcessingBufferCount;
    struct UInt32__Array* buff;
};
#endif
#if !defined(IL2CPP_STRUCT_SHA1Internal__Fields_FWDDECL)
#define IL2CPP_STRUCT_SHA1Internal__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/UInt32__Array.h>
#endif
#undef IL2CPP_STRUCT_SHA1Internal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SHA1Internal__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SHA1Internal__Fields_FWDDECL)
#include <Modloader/app/structs/SHA1Internal__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SHA1Internal__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
