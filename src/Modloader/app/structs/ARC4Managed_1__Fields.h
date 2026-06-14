#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ARC4Managed_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ARC4Managed_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ARC4Managed_1__Fields_DEFINED)
#include <Modloader/app/structs/RC4_1__Fields.h>
#if defined(IL2CPP_STRUCT_RC4_1__Fields_DEFINED)
#define IL2CPP_STRUCT_ARC4Managed_1__Fields_DEFINED
struct Byte__Array;
struct ARC4Managed_1__Fields {
    struct RC4_1__Fields _;
    struct Byte__Array* key;
    struct Byte__Array* state;
    uint8_t x;
    uint8_t y;
    bool m_disposed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ARC4Managed_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_ARC4Managed_1__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_ARC4Managed_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ARC4Managed_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ARC4Managed_1__Fields_FWDDECL)
#include <Modloader/app/structs/ARC4Managed_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ARC4Managed_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
