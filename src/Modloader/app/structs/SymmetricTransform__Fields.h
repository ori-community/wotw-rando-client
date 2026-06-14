#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SymmetricTransform__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SymmetricTransform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SymmetricTransform__Fields_DEFINED)
#include <Modloader/app/structs/PaddingMode__Enum.h>
#if defined(IL2CPP_STRUCT_PaddingMode__Enum_DEFINED)
#define IL2CPP_STRUCT_SymmetricTransform__Fields_DEFINED
struct SymmetricAlgorithm;
struct Byte__Array;
struct RandomNumberGenerator;
struct __declspec(align(8)) SymmetricTransform__Fields {
    struct SymmetricAlgorithm* algo;
    bool encrypt;
    int32_t BlockSizeByte;
    struct Byte__Array* temp;
    struct Byte__Array* temp2;
    struct Byte__Array* workBuff;
    struct Byte__Array* workout;
    PaddingMode__Enum padmode;

    int32_t FeedBackByte;
    bool m_disposed;
    bool lastBlock;
    struct RandomNumberGenerator* _rng;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SymmetricTransform__Fields_FWDDECL)
#define IL2CPP_STRUCT_SymmetricTransform__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/RandomNumberGenerator.h>
#include <Modloader/app/structs/SymmetricAlgorithm.h>
#endif
#undef IL2CPP_STRUCT_SymmetricTransform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SymmetricTransform__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SymmetricTransform__Fields_FWDDECL)
#include <Modloader/app/structs/SymmetricTransform__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SymmetricTransform__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
