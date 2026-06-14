#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpVersion__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpVersion__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpVersion__StaticFields_DEFINED)
#define IL2CPP_STRUCT_HttpVersion__StaticFields_DEFINED
struct Version;
struct HttpVersion__StaticFields {
    struct Version* Version10;
    struct Version* Version11;
};
#endif
#if !defined(IL2CPP_STRUCT_HttpVersion__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_HttpVersion__StaticFields_FWDDECL
#include <Modloader/app/structs/Version.h>
#endif
#undef IL2CPP_STRUCT_HttpVersion__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpVersion__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_HttpVersion__StaticFields_FWDDECL)
#include <Modloader/app/structs/HttpVersion__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpVersion__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
