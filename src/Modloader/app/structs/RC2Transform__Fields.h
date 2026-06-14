#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RC2Transform__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RC2Transform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RC2Transform__Fields_DEFINED)
#include <Modloader/app/structs/SymmetricTransform__Fields.h>
#if defined(IL2CPP_STRUCT_SymmetricTransform__Fields_DEFINED)
#define IL2CPP_STRUCT_RC2Transform__Fields_DEFINED
struct UInt16__Array;
struct RC2Transform__Fields {
    struct SymmetricTransform__Fields _;
    uint16_t R0;
    uint16_t R1;
    uint16_t R2;
    uint16_t R3;
    struct UInt16__Array* K;
    int32_t j;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RC2Transform__Fields_FWDDECL)
#define IL2CPP_STRUCT_RC2Transform__Fields_FWDDECL
#include <Modloader/app/structs/UInt16__Array.h>
#endif
#undef IL2CPP_STRUCT_RC2Transform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RC2Transform__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RC2Transform__Fields_FWDDECL)
#include <Modloader/app/structs/RC2Transform__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RC2Transform__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
