#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileSet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileSet__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#include <Modloader/app/structs/Nullable_1_PlayFab_PlayStreamModels_OperationTypes_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_PlayFab_PlayStreamModels_OperationTypes__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Int32__DEFINED)
#define IL2CPP_STRUCT_FileSet__Fields_DEFINED
struct String;
struct __declspec(align(8)) FileSet__Fields {
    int32_t ByteCount;
    struct String* Checksum;
    struct String* FileName;
    struct Nullable_1_PlayFab_PlayStreamModels_OperationTypes_ Operation;
    struct Nullable_1_Int32_ PreviousByteCount;
    struct String* PreviousChecksum;
    struct String* PreviousStoragePath;
    struct String* StoragePath;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FileSet__Fields_FWDDECL)
#define IL2CPP_STRUCT_FileSet__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_FileSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileSet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FileSet__Fields_FWDDECL)
#include <Modloader/app/structs/FileSet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileSet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
