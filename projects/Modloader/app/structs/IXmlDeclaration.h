#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IXmlDeclaration_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IXmlDeclaration_INITIALIZING
#if !defined(IL2CPP_STRUCT_IXmlDeclaration_DEFINED)
#define IL2CPP_STRUCT_IXmlDeclaration_DEFINED
struct IXmlDeclaration__Class;
struct IXmlDeclaration {
    struct IXmlDeclaration__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IXmlDeclaration_FWDDECL)
#define IL2CPP_STRUCT_IXmlDeclaration_FWDDECL
#include <Modloader/app/structs/IXmlDeclaration__Class.h>
#endif
#undef IL2CPP_STRUCT_IXmlDeclaration_INITIALIZING
#if !defined(IL2CPP_STRUCT_IXmlDeclaration_DEFINED) && !defined(IL2CPP_STRUCT_IXmlDeclaration_FWDDECL)
#include <Modloader/app/structs/IXmlDeclaration.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IXmlDeclaration.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
