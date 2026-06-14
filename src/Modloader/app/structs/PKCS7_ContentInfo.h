#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PKCS7_ContentInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PKCS7_ContentInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS7_ContentInfo_DEFINED)
#include <Modloader/app/structs/PKCS7_ContentInfo__Fields.h>
#if defined(IL2CPP_STRUCT_PKCS7_ContentInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_PKCS7_ContentInfo_DEFINED
struct PKCS7_ContentInfo__Class;
struct PKCS7_ContentInfo {
    struct PKCS7_ContentInfo__Class* klass;
    MonitorData* monitor;
    struct PKCS7_ContentInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PKCS7_ContentInfo_FWDDECL)
#define IL2CPP_STRUCT_PKCS7_ContentInfo_FWDDECL
#include <Modloader/app/structs/PKCS7_ContentInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_PKCS7_ContentInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS7_ContentInfo_DEFINED) && !defined(IL2CPP_STRUCT_PKCS7_ContentInfo_FWDDECL)
#include <Modloader/app/structs/PKCS7_ContentInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PKCS7_ContentInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
