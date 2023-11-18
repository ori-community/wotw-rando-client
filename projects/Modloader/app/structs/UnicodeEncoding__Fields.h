#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnicodeEncoding__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnicodeEncoding__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnicodeEncoding__Fields_DEFINED)
#include <Modloader/app/structs/Encoding__Fields.h>
#if defined(IL2CPP_STRUCT_Encoding__Fields_DEFINED)
#define IL2CPP_STRUCT_UnicodeEncoding__Fields_DEFINED
struct UnicodeEncoding__Fields {
    struct Encoding__Fields _;
    bool isThrowException;
    bool bigEndian;
    bool byteOrderMark;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnicodeEncoding__Fields_FWDDECL)
#define IL2CPP_STRUCT_UnicodeEncoding__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_UnicodeEncoding__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnicodeEncoding__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UnicodeEncoding__Fields_FWDDECL)
#include <Modloader/app/structs/UnicodeEncoding__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnicodeEncoding__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
