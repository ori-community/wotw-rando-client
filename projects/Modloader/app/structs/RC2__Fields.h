#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RC2__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RC2__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RC2__Fields_DEFINED)
#include <Modloader/app/structs/SymmetricAlgorithm__Fields.h>
#if defined(IL2CPP_STRUCT_SymmetricAlgorithm__Fields_DEFINED)
#define IL2CPP_STRUCT_RC2__Fields_DEFINED
struct RC2__Fields {
    struct SymmetricAlgorithm__Fields _;
    int32_t EffectiveKeySizeValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RC2__Fields_FWDDECL)
#define IL2CPP_STRUCT_RC2__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_RC2__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RC2__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RC2__Fields_FWDDECL)
#include <Modloader/app/structs/RC2__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RC2__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
