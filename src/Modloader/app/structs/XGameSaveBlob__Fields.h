#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XGameSaveBlob__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XGameSaveBlob__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XGameSaveBlob__Fields_DEFINED)
#define IL2CPP_STRUCT_XGameSaveBlob__Fields_DEFINED
struct XGameSaveBlobInfo_1;
struct Byte__Array;
struct __declspec(align(8)) XGameSaveBlob__Fields {
    struct XGameSaveBlobInfo_1* Info;
    struct Byte__Array* Data;
};
#endif
#if !defined(IL2CPP_STRUCT_XGameSaveBlob__Fields_FWDDECL)
#define IL2CPP_STRUCT_XGameSaveBlob__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/XGameSaveBlobInfo_1.h>
#endif
#undef IL2CPP_STRUCT_XGameSaveBlob__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XGameSaveBlob__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XGameSaveBlob__Fields_FWDDECL)
#include <Modloader/app/structs/XGameSaveBlob__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XGameSaveBlob__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
