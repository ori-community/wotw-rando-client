#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UTF32Encoding__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UTF32Encoding__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UTF32Encoding__Fields_DEFINED)
#include <Modloader/app/structs/Encoding__Fields.h>
#if defined(IL2CPP_STRUCT_Encoding__Fields_DEFINED)
#define IL2CPP_STRUCT_UTF32Encoding__Fields_DEFINED
struct UTF32Encoding__Fields {
    struct Encoding__Fields _;
    bool emitUTF32ByteOrderMark;
    bool isThrowException;
    bool bigEndian;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UTF32Encoding__Fields_FWDDECL)
#define IL2CPP_STRUCT_UTF32Encoding__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_UTF32Encoding__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UTF32Encoding__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UTF32Encoding__Fields_FWDDECL)
#include <Modloader/app/structs/UTF32Encoding__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UTF32Encoding__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
