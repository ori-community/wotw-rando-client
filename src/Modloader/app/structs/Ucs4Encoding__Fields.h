#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Ucs4Encoding__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Ucs4Encoding__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ucs4Encoding__Fields_DEFINED)
#include <Modloader/app/structs/Encoding__Fields.h>
#if defined(IL2CPP_STRUCT_Encoding__Fields_DEFINED)
#define IL2CPP_STRUCT_Ucs4Encoding__Fields_DEFINED
struct Ucs4Decoder;
struct Ucs4Encoding__Fields {
    struct Encoding__Fields _;
    struct Ucs4Decoder* ucs4Decoder;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Ucs4Encoding__Fields_FWDDECL)
#define IL2CPP_STRUCT_Ucs4Encoding__Fields_FWDDECL
#include <Modloader/app/structs/Ucs4Decoder.h>
#endif
#undef IL2CPP_STRUCT_Ucs4Encoding__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ucs4Encoding__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Ucs4Encoding__Fields_FWDDECL)
#include <Modloader/app/structs/Ucs4Encoding__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Ucs4Encoding__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
