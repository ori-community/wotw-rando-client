#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StringWriter__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StringWriter__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringWriter__StaticFields_DEFINED)
#define IL2CPP_STRUCT_StringWriter__StaticFields_DEFINED
struct UnicodeEncoding;
struct StringWriter__StaticFields {
    struct UnicodeEncoding* m_encoding;
};
#endif
#if !defined(IL2CPP_STRUCT_StringWriter__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_StringWriter__StaticFields_FWDDECL
#include <Modloader/app/structs/UnicodeEncoding.h>
#endif
#undef IL2CPP_STRUCT_StringWriter__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringWriter__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_StringWriter__StaticFields_FWDDECL)
#include <Modloader/app/structs/StringWriter__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StringWriter__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
