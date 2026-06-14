#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ElementWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ElementWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ElementWriter_DEFINED)
#include <Modloader/app/structs/NamespaceResolver.h>
#if defined(IL2CPP_STRUCT_NamespaceResolver_DEFINED)
#define IL2CPP_STRUCT_ElementWriter_DEFINED
struct XmlWriter;
struct ElementWriter {
    struct XmlWriter* writer;
    struct NamespaceResolver resolver;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ElementWriter_FWDDECL)
#define IL2CPP_STRUCT_ElementWriter_FWDDECL
#include <Modloader/app/structs/XmlWriter.h>
#endif
#undef IL2CPP_STRUCT_ElementWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ElementWriter_DEFINED) && !defined(IL2CPP_STRUCT_ElementWriter_FWDDECL)
#include <Modloader/app/structs/ElementWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ElementWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
