#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DESTransform__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DESTransform__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DESTransform__StaticFields_DEFINED)
#define IL2CPP_STRUCT_DESTransform__StaticFields_DEFINED
struct UInt32__Array;
struct Byte__Array;
struct DESTransform__StaticFields {
    int32_t KEY_BIT_SIZE;
    int32_t KEY_BYTE_SIZE;
    int32_t BLOCK_BIT_SIZE;
    int32_t BLOCK_BYTE_SIZE;
    struct UInt32__Array* spBoxes;
    struct Byte__Array* PC1;
    struct Byte__Array* leftRotTotal;
    struct Byte__Array* PC2;
    struct UInt32__Array* ipTab;
    struct UInt32__Array* fpTab;
};
#endif
#if !defined(IL2CPP_STRUCT_DESTransform__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_DESTransform__StaticFields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/UInt32__Array.h>
#endif
#undef IL2CPP_STRUCT_DESTransform__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DESTransform__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_DESTransform__StaticFields_FWDDECL)
#include <Modloader/app/structs/DESTransform__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DESTransform__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
