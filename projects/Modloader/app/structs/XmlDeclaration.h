#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlDeclaration_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlDeclaration_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDeclaration_DEFINED)
#include <Modloader/app/structs/XmlDeclaration__Fields.h>
#if defined(IL2CPP_STRUCT_XmlDeclaration__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlDeclaration_DEFINED
struct XmlDeclaration__Class;
struct XmlDeclaration {
    struct XmlDeclaration__Class* klass;
    MonitorData* monitor;
    struct XmlDeclaration__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlDeclaration_FWDDECL)
#define IL2CPP_STRUCT_XmlDeclaration_FWDDECL
#include <Modloader/app/structs/XmlDeclaration__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlDeclaration_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDeclaration_DEFINED) && !defined(IL2CPP_STRUCT_XmlDeclaration_FWDDECL)
#include <Modloader/app/structs/XmlDeclaration.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlDeclaration.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
