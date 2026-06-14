#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DigestHeaderParser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DigestHeaderParser_INITIALIZING
#if !defined(IL2CPP_STRUCT_DigestHeaderParser_DEFINED)
#include <Modloader/app/structs/DigestHeaderParser__Fields.h>
#if defined(IL2CPP_STRUCT_DigestHeaderParser__Fields_DEFINED)
#define IL2CPP_STRUCT_DigestHeaderParser_DEFINED
struct DigestHeaderParser__Class;
struct DigestHeaderParser {
    struct DigestHeaderParser__Class* klass;
    MonitorData* monitor;
    struct DigestHeaderParser__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DigestHeaderParser_FWDDECL)
#define IL2CPP_STRUCT_DigestHeaderParser_FWDDECL
#include <Modloader/app/structs/DigestHeaderParser__Class.h>
#endif
#undef IL2CPP_STRUCT_DigestHeaderParser_INITIALIZING
#if !defined(IL2CPP_STRUCT_DigestHeaderParser_DEFINED) && !defined(IL2CPP_STRUCT_DigestHeaderParser_FWDDECL)
#include <Modloader/app/structs/DigestHeaderParser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DigestHeaderParser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
