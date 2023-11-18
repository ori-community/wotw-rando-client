#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DSASignatureFormatter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DSASignatureFormatter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DSASignatureFormatter__Fields_DEFINED)
#define IL2CPP_STRUCT_DSASignatureFormatter__Fields_DEFINED
struct DSA;
struct String;
struct __declspec(align(8)) DSASignatureFormatter__Fields {
    struct DSA* _dsaKey;
    struct String* _oid;
};
#endif
#if !defined(IL2CPP_STRUCT_DSASignatureFormatter__Fields_FWDDECL)
#define IL2CPP_STRUCT_DSASignatureFormatter__Fields_FWDDECL
#include <Modloader/app/structs/DSA.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DSASignatureFormatter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DSASignatureFormatter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DSASignatureFormatter__Fields_FWDDECL)
#include <Modloader/app/structs/DSASignatureFormatter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DSASignatureFormatter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
