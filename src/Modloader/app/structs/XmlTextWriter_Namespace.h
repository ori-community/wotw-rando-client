#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTextWriter_Namespace_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTextWriter_Namespace_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextWriter_Namespace_DEFINED)
#define IL2CPP_STRUCT_XmlTextWriter_Namespace_DEFINED
struct String;
struct XmlTextWriter_Namespace {
    struct String* prefix;
    struct String* ns;
    bool declared;
    int32_t prevNsIndex;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlTextWriter_Namespace_FWDDECL)
#define IL2CPP_STRUCT_XmlTextWriter_Namespace_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XmlTextWriter_Namespace_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextWriter_Namespace_DEFINED) && !defined(IL2CPP_STRUCT_XmlTextWriter_Namespace_FWDDECL)
#include <Modloader/app/structs/XmlTextWriter_Namespace.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTextWriter_Namespace.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
