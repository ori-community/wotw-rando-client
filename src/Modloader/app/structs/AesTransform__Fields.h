#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AesTransform__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AesTransform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AesTransform__Fields_DEFINED)
#include <Modloader/app/structs/SymmetricTransform__Fields.h>
#if defined(IL2CPP_STRUCT_SymmetricTransform__Fields_DEFINED)
#define IL2CPP_STRUCT_AesTransform__Fields_DEFINED
struct UInt32__Array;
struct AesTransform__Fields {
    struct SymmetricTransform__Fields _;
    struct UInt32__Array* expandedKey;
    int32_t Nk;
    int32_t Nr;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AesTransform__Fields_FWDDECL)
#define IL2CPP_STRUCT_AesTransform__Fields_FWDDECL
#include <Modloader/app/structs/UInt32__Array.h>
#endif
#undef IL2CPP_STRUCT_AesTransform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AesTransform__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AesTransform__Fields_FWDDECL)
#include <Modloader/app/structs/AesTransform__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AesTransform__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
