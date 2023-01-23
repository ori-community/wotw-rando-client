#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HostHeaderString__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HostHeaderString__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HostHeaderString__Fields_DEFINED)
#define IL2CPP_STRUCT_HostHeaderString__Fields_DEFINED
struct String;
struct Byte__Array;
struct __declspec(align(8)) HostHeaderString__Fields {
    bool m_Converted;
    struct String* m_String;
    struct Byte__Array* m_Bytes;
};
#endif
#if !defined(IL2CPP_STRUCT_HostHeaderString__Fields_FWDDECL)
#define IL2CPP_STRUCT_HostHeaderString__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_HostHeaderString__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HostHeaderString__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HostHeaderString__Fields_FWDDECL)
#include <Modloader/app/structs/HostHeaderString__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HostHeaderString__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
