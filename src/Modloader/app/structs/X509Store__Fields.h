#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509Store__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509Store__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Store__Fields_DEFINED)
#include <Modloader/app/structs/OpenFlags__Enum.h>
#include <Modloader/app/structs/StoreLocation__Enum.h>
#if defined(IL2CPP_STRUCT_StoreLocation__Enum_DEFINED) && defined(IL2CPP_STRUCT_OpenFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_X509Store__Fields_DEFINED
struct String;
struct X509Certificate2Collection;
struct X509Store_1;
struct __declspec(align(8)) X509Store__Fields {
    struct String* _name;
    StoreLocation__Enum _location;

    struct X509Certificate2Collection* list;
    OpenFlags__Enum _flags;

    struct X509Store_1* store;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509Store__Fields_FWDDECL)
#define IL2CPP_STRUCT_X509Store__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/X509Certificate2Collection.h>
#include <Modloader/app/structs/X509Store_1.h>
#endif
#undef IL2CPP_STRUCT_X509Store__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Store__Fields_DEFINED) && !defined(IL2CPP_STRUCT_X509Store__Fields_FWDDECL)
#include <Modloader/app/structs/X509Store__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509Store__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
