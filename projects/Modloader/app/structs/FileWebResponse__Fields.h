#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileWebResponse__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileWebResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileWebResponse__Fields_DEFINED)
#include <Modloader/app/structs/FileAccess__Enum.h>
#include <Modloader/app/structs/WebResponse__Fields.h>
#if defined(IL2CPP_STRUCT_WebResponse__Fields_DEFINED) && defined(IL2CPP_STRUCT_FileAccess__Enum_DEFINED)
#define IL2CPP_STRUCT_FileWebResponse__Fields_DEFINED
struct WebHeaderCollection;
struct Stream;
struct Uri;
struct FileWebResponse__Fields {
    struct WebResponse__Fields _;
    bool m_closed;
    int64_t m_contentLength;
    FileAccess__Enum m_fileAccess;

    struct WebHeaderCollection* m_headers;
    struct Stream* m_stream;
    struct Uri* m_uri;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FileWebResponse__Fields_FWDDECL)
#define IL2CPP_STRUCT_FileWebResponse__Fields_FWDDECL
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/WebHeaderCollection.h>
#endif
#undef IL2CPP_STRUCT_FileWebResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileWebResponse__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FileWebResponse__Fields_FWDDECL)
#include <Modloader/app/structs/FileWebResponse__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileWebResponse__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
