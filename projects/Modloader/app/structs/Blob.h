#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Blob_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Blob_INITIALIZING
#if !defined(IL2CPP_STRUCT_Blob_DEFINED)
#define IL2CPP_STRUCT_Blob_DEFINED
struct Blob {
    int32_t cbSize;
    int32_t pBlobData;
};
#endif
#if !defined(IL2CPP_STRUCT_Blob_FWDDECL)
#define IL2CPP_STRUCT_Blob_FWDDECL
#endif
#undef IL2CPP_STRUCT_Blob_INITIALIZING
#if !defined(IL2CPP_STRUCT_Blob_DEFINED) && !defined(IL2CPP_STRUCT_Blob_FWDDECL)
#include <Modloader/app/structs/Blob.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Blob.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
