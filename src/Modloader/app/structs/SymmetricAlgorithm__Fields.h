#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SymmetricAlgorithm__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SymmetricAlgorithm__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SymmetricAlgorithm__Fields_DEFINED)
#include <Modloader/app/structs/CipherMode__Enum.h>
#include <Modloader/app/structs/PaddingMode__Enum.h>
#if defined(IL2CPP_STRUCT_CipherMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_PaddingMode__Enum_DEFINED)
#define IL2CPP_STRUCT_SymmetricAlgorithm__Fields_DEFINED
struct Byte__Array;
struct KeySizes__Array;
struct __declspec(align(8)) SymmetricAlgorithm__Fields {
    int32_t BlockSizeValue;
    int32_t FeedbackSizeValue;
    struct Byte__Array* IVValue;
    struct Byte__Array* KeyValue;
    struct KeySizes__Array* LegalBlockSizesValue;
    struct KeySizes__Array* LegalKeySizesValue;
    int32_t KeySizeValue;
    CipherMode__Enum ModeValue;

    PaddingMode__Enum PaddingValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SymmetricAlgorithm__Fields_FWDDECL)
#define IL2CPP_STRUCT_SymmetricAlgorithm__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/KeySizes__Array.h>
#endif
#undef IL2CPP_STRUCT_SymmetricAlgorithm__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SymmetricAlgorithm__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SymmetricAlgorithm__Fields_FWDDECL)
#include <Modloader/app/structs/SymmetricAlgorithm__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SymmetricAlgorithm__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
