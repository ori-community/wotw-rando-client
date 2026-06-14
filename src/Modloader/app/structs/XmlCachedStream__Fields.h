#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlCachedStream__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlCachedStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlCachedStream__Fields_DEFINED)
#include <Modloader/app/structs/MemoryStream__Fields.h>
#if defined(IL2CPP_STRUCT_MemoryStream__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlCachedStream__Fields_DEFINED
struct Uri;
struct XmlCachedStream__Fields {
    struct MemoryStream__Fields _;
    struct Uri* uri;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlCachedStream__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlCachedStream__Fields_FWDDECL
#include <Modloader/app/structs/Uri.h>
#endif
#undef IL2CPP_STRUCT_XmlCachedStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlCachedStream__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlCachedStream__Fields_FWDDECL)
#include <Modloader/app/structs/XmlCachedStream__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlCachedStream__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
