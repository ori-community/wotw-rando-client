#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XGameSaveBlob_1_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XGameSaveBlob_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_XGameSaveBlob_1_DEFINED)
#include <Modloader/app/structs/XGameSaveBlobInfo.h>
#if defined(IL2CPP_STRUCT_XGameSaveBlobInfo_DEFINED)
#define IL2CPP_STRUCT_XGameSaveBlob_1_DEFINED
struct XGameSaveBlob_1 {
    struct XGameSaveBlobInfo info;
    void* data;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XGameSaveBlob_1_FWDDECL)
#define IL2CPP_STRUCT_XGameSaveBlob_1_FWDDECL
#endif
#undef IL2CPP_STRUCT_XGameSaveBlob_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_XGameSaveBlob_1_DEFINED) && !defined(IL2CPP_STRUCT_XGameSaveBlob_1_FWDDECL)
#include <Modloader/app/structs/XGameSaveBlob_1.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XGameSaveBlob_1.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
