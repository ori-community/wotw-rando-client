#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebHeaderCollection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebHeaderCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebHeaderCollection__Fields_DEFINED)
#include <Modloader/app/structs/NameValueCollection__Fields.h>
#include <Modloader/app/structs/WebHeaderCollectionType__Enum.h>
#if defined(IL2CPP_STRUCT_NameValueCollection__Fields_DEFINED) && defined(IL2CPP_STRUCT_WebHeaderCollectionType__Enum_DEFINED)
#define IL2CPP_STRUCT_WebHeaderCollection__Fields_DEFINED
struct String__Array;
struct NameValueCollection;
struct WebHeaderCollection__Fields {
    struct NameValueCollection__Fields _;
    struct String__Array* m_CommonHeaders;
    int32_t m_NumCommonHeaders;
    struct NameValueCollection* m_InnerCollection;
    WebHeaderCollectionType__Enum m_Type;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WebHeaderCollection__Fields_FWDDECL)
#define IL2CPP_STRUCT_WebHeaderCollection__Fields_FWDDECL
#include <Modloader/app/structs/NameValueCollection.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_WebHeaderCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebHeaderCollection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WebHeaderCollection__Fields_FWDDECL)
#include <Modloader/app/structs/WebHeaderCollection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebHeaderCollection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
