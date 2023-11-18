#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RijndaelManagedTransform__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RijndaelManagedTransform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RijndaelManagedTransform__Fields_DEFINED)
#include <Modloader/app/structs/CipherMode__Enum.h>
#include <Modloader/app/structs/PaddingMode__Enum.h>
#include <Modloader/app/structs/RijndaelManagedTransformMode__Enum.h>
#if defined(IL2CPP_STRUCT_CipherMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_PaddingMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_RijndaelManagedTransformMode__Enum_DEFINED)
#define IL2CPP_STRUCT_RijndaelManagedTransform__Fields_DEFINED
struct Int32__Array;
struct Byte__Array;
struct __declspec(align(8)) RijndaelManagedTransform__Fields {
    CipherMode__Enum m_cipherMode;

    PaddingMode__Enum m_paddingValue;

    RijndaelManagedTransformMode__Enum m_transformMode;

    int32_t m_blockSizeBits;
    int32_t m_blockSizeBytes;
    int32_t m_inputBlockSize;
    int32_t m_outputBlockSize;
    struct Int32__Array* m_encryptKeyExpansion;
    struct Int32__Array* m_decryptKeyExpansion;
    int32_t m_Nr;
    int32_t m_Nb;
    int32_t m_Nk;
    struct Int32__Array* m_encryptindex;
    struct Int32__Array* m_decryptindex;
    struct Int32__Array* m_IV;
    struct Int32__Array* m_lastBlockBuffer;
    struct Byte__Array* m_depadBuffer;
    struct Byte__Array* m_shiftRegister;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RijndaelManagedTransform__Fields_FWDDECL)
#define IL2CPP_STRUCT_RijndaelManagedTransform__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#endif
#undef IL2CPP_STRUCT_RijndaelManagedTransform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RijndaelManagedTransform__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RijndaelManagedTransform__Fields_FWDDECL)
#include <Modloader/app/structs/RijndaelManagedTransform__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RijndaelManagedTransform__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
