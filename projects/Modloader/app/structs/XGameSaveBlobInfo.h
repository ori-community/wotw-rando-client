#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XGameSaveBlobInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XGameSaveBlobInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_XGameSaveBlobInfo_DEFINED)
#include <Modloader/app/structs/UTF8StringPtr.h>
#if defined(IL2CPP_STRUCT_UTF8StringPtr_DEFINED)
#define IL2CPP_STRUCT_XGameSaveBlobInfo_DEFINED
struct XGameSaveBlobInfo {
    struct UTF8StringPtr Name;
    uint32_t Size;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XGameSaveBlobInfo_FWDDECL)
#define IL2CPP_STRUCT_XGameSaveBlobInfo_FWDDECL
#endif
#undef IL2CPP_STRUCT_XGameSaveBlobInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_XGameSaveBlobInfo_DEFINED) && !defined(IL2CPP_STRUCT_XGameSaveBlobInfo_FWDDECL)
#include <Modloader/app/structs/XGameSaveBlobInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XGameSaveBlobInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
