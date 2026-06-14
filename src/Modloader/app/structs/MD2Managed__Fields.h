#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MD2Managed__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MD2Managed__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MD2Managed__Fields_DEFINED)
#include <Modloader/app/structs/MD2__Fields.h>
#if defined(IL2CPP_STRUCT_MD2__Fields_DEFINED)
#define IL2CPP_STRUCT_MD2Managed__Fields_DEFINED
struct Byte__Array;
struct MD2Managed__Fields {
    struct MD2__Fields _;
    struct Byte__Array* state;
    struct Byte__Array* checksum;
    struct Byte__Array* buffer;
    int32_t count;
    struct Byte__Array* x;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MD2Managed__Fields_FWDDECL)
#define IL2CPP_STRUCT_MD2Managed__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_MD2Managed__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MD2Managed__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MD2Managed__Fields_FWDDECL)
#include <Modloader/app/structs/MD2Managed__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MD2Managed__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
