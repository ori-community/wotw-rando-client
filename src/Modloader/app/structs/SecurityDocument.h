#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SecurityDocument_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SecurityDocument_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityDocument_DEFINED)
#include <Modloader/app/structs/SecurityDocument__Fields.h>
#if defined(IL2CPP_STRUCT_SecurityDocument__Fields_DEFINED)
#define IL2CPP_STRUCT_SecurityDocument_DEFINED
struct SecurityDocument__Class;
struct SecurityDocument {
    struct SecurityDocument__Class* klass;
    MonitorData* monitor;
    struct SecurityDocument__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SecurityDocument_FWDDECL)
#define IL2CPP_STRUCT_SecurityDocument_FWDDECL
#include <Modloader/app/structs/SecurityDocument__Class.h>
#endif
#undef IL2CPP_STRUCT_SecurityDocument_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityDocument_DEFINED) && !defined(IL2CPP_STRUCT_SecurityDocument_FWDDECL)
#include <Modloader/app/structs/SecurityDocument.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SecurityDocument.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
