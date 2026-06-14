#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DomNameTable__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DomNameTable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DomNameTable__Fields_DEFINED)
#define IL2CPP_STRUCT_DomNameTable__Fields_DEFINED
struct XmlName__Array;
struct XmlDocument;
struct XmlNameTable;
struct __declspec(align(8)) DomNameTable__Fields {
    struct XmlName__Array* entries;
    int32_t count;
    int32_t mask;
    struct XmlDocument* ownerDocument;
    struct XmlNameTable* nameTable;
};
#endif
#if !defined(IL2CPP_STRUCT_DomNameTable__Fields_FWDDECL)
#define IL2CPP_STRUCT_DomNameTable__Fields_FWDDECL
#include <Modloader/app/structs/XmlDocument.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlName__Array.h>
#endif
#undef IL2CPP_STRUCT_DomNameTable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DomNameTable__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DomNameTable__Fields_FWDDECL)
#include <Modloader/app/structs/DomNameTable__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DomNameTable__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
