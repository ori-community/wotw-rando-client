#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RIPEMD160Managed__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RIPEMD160Managed__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RIPEMD160Managed__Fields_DEFINED)
#include <Modloader/app/structs/RIPEMD160__Fields.h>
#if defined(IL2CPP_STRUCT_RIPEMD160__Fields_DEFINED)
#define IL2CPP_STRUCT_RIPEMD160Managed__Fields_DEFINED
struct Byte__Array;
struct UInt32__Array;
struct RIPEMD160Managed__Fields {
    struct RIPEMD160__Fields _;
    struct Byte__Array* _buffer;
    int64_t _count;
    struct UInt32__Array* _stateMD160;
    struct UInt32__Array* _blockDWords;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RIPEMD160Managed__Fields_FWDDECL)
#define IL2CPP_STRUCT_RIPEMD160Managed__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/UInt32__Array.h>
#endif
#undef IL2CPP_STRUCT_RIPEMD160Managed__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RIPEMD160Managed__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RIPEMD160Managed__Fields_FWDDECL)
#include <Modloader/app/structs/RIPEMD160Managed__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RIPEMD160Managed__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
