#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CaseInsensitiveAscii__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CaseInsensitiveAscii__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CaseInsensitiveAscii__StaticFields_DEFINED)
#define IL2CPP_STRUCT_CaseInsensitiveAscii__StaticFields_DEFINED
struct CaseInsensitiveAscii;
struct Byte__Array;
struct CaseInsensitiveAscii__StaticFields {
    struct CaseInsensitiveAscii* StaticInstance;
    struct Byte__Array* AsciiToLower;
};
#endif
#if !defined(IL2CPP_STRUCT_CaseInsensitiveAscii__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_CaseInsensitiveAscii__StaticFields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CaseInsensitiveAscii.h>
#endif
#undef IL2CPP_STRUCT_CaseInsensitiveAscii__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CaseInsensitiveAscii__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_CaseInsensitiveAscii__StaticFields_FWDDECL)
#include <Modloader/app/structs/CaseInsensitiveAscii__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CaseInsensitiveAscii__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
