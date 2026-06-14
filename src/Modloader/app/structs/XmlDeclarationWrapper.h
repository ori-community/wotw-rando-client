#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlDeclarationWrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlDeclarationWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDeclarationWrapper_DEFINED)
#include <Modloader/app/structs/XmlDeclarationWrapper__Fields.h>
#if defined(IL2CPP_STRUCT_XmlDeclarationWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlDeclarationWrapper_DEFINED
struct XmlDeclarationWrapper__Class;
struct XmlDeclarationWrapper {
    struct XmlDeclarationWrapper__Class* klass;
    MonitorData* monitor;
    struct XmlDeclarationWrapper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlDeclarationWrapper_FWDDECL)
#define IL2CPP_STRUCT_XmlDeclarationWrapper_FWDDECL
#include <Modloader/app/structs/XmlDeclarationWrapper__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlDeclarationWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDeclarationWrapper_DEFINED) && !defined(IL2CPP_STRUCT_XmlDeclarationWrapper_FWDDECL)
#include <Modloader/app/structs/XmlDeclarationWrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlDeclarationWrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
