#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XDeclaration_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XDeclaration_INITIALIZING
#if !defined(IL2CPP_STRUCT_XDeclaration_DEFINED)
#include <Modloader/app/structs/XDeclaration__Fields.h>
#if defined(IL2CPP_STRUCT_XDeclaration__Fields_DEFINED)
#define IL2CPP_STRUCT_XDeclaration_DEFINED
struct XDeclaration__Class;
struct XDeclaration {
    struct XDeclaration__Class* klass;
    MonitorData* monitor;
    struct XDeclaration__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XDeclaration_FWDDECL)
#define IL2CPP_STRUCT_XDeclaration_FWDDECL
#include <Modloader/app/structs/XDeclaration__Class.h>
#endif
#undef IL2CPP_STRUCT_XDeclaration_INITIALIZING
#if !defined(IL2CPP_STRUCT_XDeclaration_DEFINED) && !defined(IL2CPP_STRUCT_XDeclaration_FWDDECL)
#include <Modloader/app/structs/XDeclaration.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XDeclaration.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
