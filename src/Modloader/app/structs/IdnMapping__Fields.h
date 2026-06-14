#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IdnMapping__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IdnMapping__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IdnMapping__Fields_DEFINED)
#define IL2CPP_STRUCT_IdnMapping__Fields_DEFINED
struct Punycode;
struct __declspec(align(8)) IdnMapping__Fields {
    bool allow_unassigned;
    bool use_std3;
    struct Punycode* puny;
};
#endif
#if !defined(IL2CPP_STRUCT_IdnMapping__Fields_FWDDECL)
#define IL2CPP_STRUCT_IdnMapping__Fields_FWDDECL
#include <Modloader/app/structs/Punycode.h>
#endif
#undef IL2CPP_STRUCT_IdnMapping__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IdnMapping__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IdnMapping__Fields_FWDDECL)
#include <Modloader/app/structs/IdnMapping__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IdnMapping__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
