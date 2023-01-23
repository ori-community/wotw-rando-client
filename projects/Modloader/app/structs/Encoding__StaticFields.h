#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Encoding__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Encoding__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Encoding__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Encoding__StaticFields_DEFINED
struct Encoding;
struct Hashtable;
struct Object;
struct Encoding__StaticFields {
    struct Encoding* defaultEncoding;
    struct Encoding* unicodeEncoding;
    struct Encoding* bigEndianUnicode;
    struct Encoding* utf7Encoding;
    struct Encoding* utf8Encoding;
    struct Encoding* utf32Encoding;
    struct Encoding* asciiEncoding;
    struct Encoding* latin1Encoding;
    struct Hashtable* encodings;
    struct Object* s_InternalSyncObject;
};
#endif
#if !defined(IL2CPP_STRUCT_Encoding__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Encoding__StaticFields_FWDDECL
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_Encoding__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Encoding__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Encoding__StaticFields_FWDDECL)
#include <Modloader/app/structs/Encoding__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Encoding__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
