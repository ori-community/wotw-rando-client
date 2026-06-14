#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MD4Managed__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MD4Managed__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MD4Managed__Fields_DEFINED)
#include <Modloader/app/structs/MD4__Fields.h>
#if defined(IL2CPP_STRUCT_MD4__Fields_DEFINED)
#define IL2CPP_STRUCT_MD4Managed__Fields_DEFINED
struct UInt32__Array;
struct Byte__Array;
struct MD4Managed__Fields {
    struct MD4__Fields _;
    struct UInt32__Array* state;
    struct Byte__Array* buffer;
    struct UInt32__Array* count;
    struct UInt32__Array* x;
    struct Byte__Array* digest;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MD4Managed__Fields_FWDDECL)
#define IL2CPP_STRUCT_MD4Managed__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/UInt32__Array.h>
#endif
#undef IL2CPP_STRUCT_MD4Managed__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MD4Managed__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MD4Managed__Fields_FWDDECL)
#include <Modloader/app/structs/MD4Managed__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MD4Managed__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
