#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProviderData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProviderData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProviderData__Fields_DEFINED)
#define IL2CPP_STRUCT_ProviderData__Fields_DEFINED
struct String;
struct Hashtable;
struct IList;
struct __declspec(align(8)) ProviderData__Fields {
    struct String* Ref;
    struct String* Type;
    struct String* Id;
    struct Hashtable* CustomProperties;
    struct IList* CustomData;
};
#endif
#if !defined(IL2CPP_STRUCT_ProviderData__Fields_FWDDECL)
#define IL2CPP_STRUCT_ProviderData__Fields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/IList.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ProviderData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProviderData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ProviderData__Fields_FWDDECL)
#include <Modloader/app/structs/ProviderData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProviderData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
