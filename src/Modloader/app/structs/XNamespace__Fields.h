#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XNamespace__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XNamespace__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XNamespace__Fields_DEFINED)
#define IL2CPP_STRUCT_XNamespace__Fields_DEFINED
struct String;
struct XHashtable_1_XName_;
struct __declspec(align(8)) XNamespace__Fields {
    struct String* namespaceName;
    int32_t hashCode;
    struct XHashtable_1_XName_* names;
};
#endif
#if !defined(IL2CPP_STRUCT_XNamespace__Fields_FWDDECL)
#define IL2CPP_STRUCT_XNamespace__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XHashtable_1_XName_.h>
#endif
#undef IL2CPP_STRUCT_XNamespace__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XNamespace__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XNamespace__Fields_FWDDECL)
#include <Modloader/app/structs/XNamespace__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XNamespace__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
