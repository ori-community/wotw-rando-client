#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509Stores__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509Stores__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Stores__Fields_DEFINED)
#define IL2CPP_STRUCT_X509Stores__Fields_DEFINED
struct String;
struct X509Store_1;
struct __declspec(align(8)) X509Stores__Fields {
    struct String* _storePath;
    bool _newFormat;
    struct X509Store_1* _personal;
    struct X509Store_1* _other;
    struct X509Store_1* _intermediate;
    struct X509Store_1* _trusted;
    struct X509Store_1* _untrusted;
};
#endif
#if !defined(IL2CPP_STRUCT_X509Stores__Fields_FWDDECL)
#define IL2CPP_STRUCT_X509Stores__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/X509Store_1.h>
#endif
#undef IL2CPP_STRUCT_X509Stores__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Stores__Fields_DEFINED) && !defined(IL2CPP_STRUCT_X509Stores__Fields_FWDDECL)
#include <Modloader/app/structs/X509Stores__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509Stores__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
