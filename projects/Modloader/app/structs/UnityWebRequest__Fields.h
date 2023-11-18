#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnityWebRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnityWebRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityWebRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_UnityWebRequest__Fields_DEFINED
struct DownloadHandler;
struct UploadHandler;
struct CertificateHandler;
struct Uri;
struct __declspec(align(8)) UnityWebRequest__Fields {
    void* m_Ptr;
    struct DownloadHandler* m_DownloadHandler;
    struct UploadHandler* m_UploadHandler;
    struct CertificateHandler* m_CertificateHandler;
    struct Uri* m_Uri;
    bool _disposeCertificateHandlerOnDispose_k__BackingField;
    bool _disposeDownloadHandlerOnDispose_k__BackingField;
    bool _disposeUploadHandlerOnDispose_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_UnityWebRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_UnityWebRequest__Fields_FWDDECL
#include <Modloader/app/structs/CertificateHandler.h>
#include <Modloader/app/structs/DownloadHandler.h>
#include <Modloader/app/structs/UploadHandler.h>
#include <Modloader/app/structs/Uri.h>
#endif
#undef IL2CPP_STRUCT_UnityWebRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityWebRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UnityWebRequest__Fields_FWDDECL)
#include <Modloader/app/structs/UnityWebRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnityWebRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
