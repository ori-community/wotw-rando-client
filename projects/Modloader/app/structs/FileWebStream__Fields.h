#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileWebStream__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileWebStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileWebStream__Fields_DEFINED)
#include <Modloader/app/structs/FileStream__Fields.h>
#if defined(IL2CPP_STRUCT_FileStream__Fields_DEFINED)
#define IL2CPP_STRUCT_FileWebStream__Fields_DEFINED
struct FileWebRequest;
struct FileWebStream__Fields {
    struct FileStream__Fields _;
    struct FileWebRequest* m_request;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FileWebStream__Fields_FWDDECL)
#define IL2CPP_STRUCT_FileWebStream__Fields_FWDDECL
#include <Modloader/app/structs/FileWebRequest.h>
#endif
#undef IL2CPP_STRUCT_FileWebStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileWebStream__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FileWebStream__Fields_FWDDECL)
#include <Modloader/app/structs/FileWebStream__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileWebStream__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
