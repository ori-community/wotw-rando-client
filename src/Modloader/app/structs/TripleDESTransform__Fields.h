#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TripleDESTransform__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TripleDESTransform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TripleDESTransform__Fields_DEFINED)
#include <Modloader/app/structs/SymmetricTransform__Fields.h>
#if defined(IL2CPP_STRUCT_SymmetricTransform__Fields_DEFINED)
#define IL2CPP_STRUCT_TripleDESTransform__Fields_DEFINED
struct DESTransform;
struct TripleDESTransform__Fields {
    struct SymmetricTransform__Fields _;
    struct DESTransform* E1;
    struct DESTransform* D2;
    struct DESTransform* E3;
    struct DESTransform* D1;
    struct DESTransform* E2;
    struct DESTransform* D3;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TripleDESTransform__Fields_FWDDECL)
#define IL2CPP_STRUCT_TripleDESTransform__Fields_FWDDECL
#include <Modloader/app/structs/DESTransform.h>
#endif
#undef IL2CPP_STRUCT_TripleDESTransform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TripleDESTransform__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TripleDESTransform__Fields_FWDDECL)
#include <Modloader/app/structs/TripleDESTransform__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TripleDESTransform__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
