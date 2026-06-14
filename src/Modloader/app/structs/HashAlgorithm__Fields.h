#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HashAlgorithm__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HashAlgorithm__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HashAlgorithm__Fields_DEFINED)
#define IL2CPP_STRUCT_HashAlgorithm__Fields_DEFINED
struct Byte__Array;
struct __declspec(align(8)) HashAlgorithm__Fields {
    int32_t HashSizeValue;
    struct Byte__Array* HashValue;
    int32_t State;
    bool m_bDisposed;
};
#endif
#if !defined(IL2CPP_STRUCT_HashAlgorithm__Fields_FWDDECL)
#define IL2CPP_STRUCT_HashAlgorithm__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_HashAlgorithm__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HashAlgorithm__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HashAlgorithm__Fields_FWDDECL)
#include <Modloader/app/structs/HashAlgorithm__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HashAlgorithm__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
