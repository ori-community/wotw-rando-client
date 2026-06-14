#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RC2__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RC2__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RC2__StaticFields_DEFINED)
#define IL2CPP_STRUCT_RC2__StaticFields_DEFINED
struct KeySizes__Array;
struct RC2__StaticFields {
    struct KeySizes__Array* s_legalBlockSizes;
    struct KeySizes__Array* s_legalKeySizes;
};
#endif
#if !defined(IL2CPP_STRUCT_RC2__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_RC2__StaticFields_FWDDECL
#include <Modloader/app/structs/KeySizes__Array.h>
#endif
#undef IL2CPP_STRUCT_RC2__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RC2__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_RC2__StaticFields_FWDDECL)
#include <Modloader/app/structs/RC2__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RC2__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
