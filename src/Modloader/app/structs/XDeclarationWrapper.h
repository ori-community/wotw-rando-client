#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XDeclarationWrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XDeclarationWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XDeclarationWrapper_DEFINED)
#include <Modloader/app/structs/XDeclarationWrapper__Fields.h>
#if defined(IL2CPP_STRUCT_XDeclarationWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_XDeclarationWrapper_DEFINED
struct XDeclarationWrapper__Class;
struct XDeclarationWrapper {
    struct XDeclarationWrapper__Class* klass;
    MonitorData* monitor;
    struct XDeclarationWrapper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XDeclarationWrapper_FWDDECL)
#define IL2CPP_STRUCT_XDeclarationWrapper_FWDDECL
#include <Modloader/app/structs/XDeclarationWrapper__Class.h>
#endif
#undef IL2CPP_STRUCT_XDeclarationWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XDeclarationWrapper_DEFINED) && !defined(IL2CPP_STRUCT_XDeclarationWrapper_FWDDECL)
#include <Modloader/app/structs/XDeclarationWrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XDeclarationWrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
