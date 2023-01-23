#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlImplementation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlImplementation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlImplementation__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlImplementation__Fields_DEFINED
struct XmlNameTable;
struct __declspec(align(8)) XmlImplementation__Fields {
    struct XmlNameTable* nameTable;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlImplementation__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlImplementation__Fields_FWDDECL
#include <Modloader/app/structs/XmlNameTable.h>
#endif
#undef IL2CPP_STRUCT_XmlImplementation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlImplementation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlImplementation__Fields_FWDDECL)
#include <Modloader/app/structs/XmlImplementation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlImplementation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
