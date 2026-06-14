#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SHA256Managed__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SHA256Managed__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SHA256Managed__Fields_DEFINED)
#include <Modloader/app/structs/SHA256__Fields.h>
#if defined(IL2CPP_STRUCT_SHA256__Fields_DEFINED)
#define IL2CPP_STRUCT_SHA256Managed__Fields_DEFINED
struct Byte__Array;
struct UInt32__Array;
struct SHA256Managed__Fields {
    struct SHA256__Fields _;
    struct Byte__Array* _buffer;
    int64_t _count;
    struct UInt32__Array* _stateSHA256;
    struct UInt32__Array* _W;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SHA256Managed__Fields_FWDDECL)
#define IL2CPP_STRUCT_SHA256Managed__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/UInt32__Array.h>
#endif
#undef IL2CPP_STRUCT_SHA256Managed__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SHA256Managed__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SHA256Managed__Fields_FWDDECL)
#include <Modloader/app/structs/SHA256Managed__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SHA256Managed__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
