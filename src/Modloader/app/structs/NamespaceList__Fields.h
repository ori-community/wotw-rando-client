#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NamespaceList__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NamespaceList__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NamespaceList__Fields_DEFINED)
#include <Modloader/app/structs/NamespaceList_ListType__Enum.h>
#if defined(IL2CPP_STRUCT_NamespaceList_ListType__Enum_DEFINED)
#define IL2CPP_STRUCT_NamespaceList__Fields_DEFINED
struct Hashtable;
struct String;
struct __declspec(align(8)) NamespaceList__Fields {
    NamespaceList_ListType__Enum type;

    struct Hashtable* set;
    struct String* targetNamespace;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NamespaceList__Fields_FWDDECL)
#define IL2CPP_STRUCT_NamespaceList__Fields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_NamespaceList__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NamespaceList__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NamespaceList__Fields_FWDDECL)
#include <Modloader/app/structs/NamespaceList__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NamespaceList__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
