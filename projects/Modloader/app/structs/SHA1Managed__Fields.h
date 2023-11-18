#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SHA1Managed__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SHA1Managed__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SHA1Managed__Fields_DEFINED)
#include <Modloader/app/structs/SHA1__Fields.h>
#if defined(IL2CPP_STRUCT_SHA1__Fields_DEFINED)
#define IL2CPP_STRUCT_SHA1Managed__Fields_DEFINED
struct Byte__Array;
struct UInt32__Array;
struct SHA1Managed__Fields {
    struct SHA1__Fields _;
    struct Byte__Array* _buffer;
    int64_t _count;
    struct UInt32__Array* _stateSHA1;
    struct UInt32__Array* _expandedBuffer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SHA1Managed__Fields_FWDDECL)
#define IL2CPP_STRUCT_SHA1Managed__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/UInt32__Array.h>
#endif
#undef IL2CPP_STRUCT_SHA1Managed__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SHA1Managed__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SHA1Managed__Fields_FWDDECL)
#include <Modloader/app/structs/SHA1Managed__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SHA1Managed__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
