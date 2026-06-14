#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UTF7Encoding__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UTF7Encoding__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UTF7Encoding__Fields_DEFINED)
#include <Modloader/app/structs/Encoding__Fields.h>
#if defined(IL2CPP_STRUCT_Encoding__Fields_DEFINED)
#define IL2CPP_STRUCT_UTF7Encoding__Fields_DEFINED
struct Byte__Array;
struct SByte__Array;
struct Boolean__Array;
struct UTF7Encoding__Fields {
    struct Encoding__Fields _;
    struct Byte__Array* base64Bytes;
    struct SByte__Array* base64Values;
    struct Boolean__Array* directEncode;
    bool m_allowOptionals;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UTF7Encoding__Fields_FWDDECL)
#define IL2CPP_STRUCT_UTF7Encoding__Fields_FWDDECL
#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/SByte__Array.h>
#endif
#undef IL2CPP_STRUCT_UTF7Encoding__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UTF7Encoding__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UTF7Encoding__Fields_FWDDECL)
#include <Modloader/app/structs/UTF7Encoding__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UTF7Encoding__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
