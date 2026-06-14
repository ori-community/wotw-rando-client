#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Asttree__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Asttree__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Asttree__Fields_DEFINED)
#define IL2CPP_STRUCT_Asttree__Fields_DEFINED
struct ArrayList;
struct String;
struct XmlNamespaceManager;
struct __declspec(align(8)) Asttree__Fields {
    struct ArrayList* fAxisArray;
    struct String* xpathexpr;
    bool isField;
    struct XmlNamespaceManager* nsmgr;
};
#endif
#if !defined(IL2CPP_STRUCT_Asttree__Fields_FWDDECL)
#define IL2CPP_STRUCT_Asttree__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlNamespaceManager.h>
#endif
#undef IL2CPP_STRUCT_Asttree__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Asttree__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Asttree__Fields_FWDDECL)
#include <Modloader/app/structs/Asttree__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Asttree__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
