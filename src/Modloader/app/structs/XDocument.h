#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XDocument_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XDocument_INITIALIZING
#if !defined(IL2CPP_STRUCT_XDocument_DEFINED)
#include <Modloader/app/structs/XDocument__Fields.h>
#if defined(IL2CPP_STRUCT_XDocument__Fields_DEFINED)
#define IL2CPP_STRUCT_XDocument_DEFINED
struct XDocument__Class;
struct XDocument {
    struct XDocument__Class* klass;
    MonitorData* monitor;
    struct XDocument__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XDocument_FWDDECL)
#define IL2CPP_STRUCT_XDocument_FWDDECL
#include <Modloader/app/structs/XDocument__Class.h>
#endif
#undef IL2CPP_STRUCT_XDocument_INITIALIZING
#if !defined(IL2CPP_STRUCT_XDocument_DEFINED) && !defined(IL2CPP_STRUCT_XDocument_FWDDECL)
#include <Modloader/app/structs/XDocument.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XDocument.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
