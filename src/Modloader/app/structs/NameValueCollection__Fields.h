#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NameValueCollection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NameValueCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameValueCollection__Fields_DEFINED)
#include <Modloader/app/structs/NameObjectCollectionBase__Fields.h>
#if defined(IL2CPP_STRUCT_NameObjectCollectionBase__Fields_DEFINED)
#define IL2CPP_STRUCT_NameValueCollection__Fields_DEFINED
struct String__Array;
struct NameValueCollection__Fields {
    struct NameObjectCollectionBase__Fields _;
    struct String__Array* _all;
    struct String__Array* _allKeys;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NameValueCollection__Fields_FWDDECL)
#define IL2CPP_STRUCT_NameValueCollection__Fields_FWDDECL
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_NameValueCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameValueCollection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NameValueCollection__Fields_FWDDECL)
#include <Modloader/app/structs/NameValueCollection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NameValueCollection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
