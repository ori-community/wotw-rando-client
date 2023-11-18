#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValidationEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValidationEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidationEventArgs_DEFINED)
#include <Modloader/app/structs/ValidationEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_ValidationEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_ValidationEventArgs_DEFINED
struct ValidationEventArgs__Class;
struct ValidationEventArgs {
    struct ValidationEventArgs__Class* klass;
    MonitorData* monitor;
    struct ValidationEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ValidationEventArgs_FWDDECL)
#define IL2CPP_STRUCT_ValidationEventArgs_FWDDECL
#include <Modloader/app/structs/ValidationEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_ValidationEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidationEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_ValidationEventArgs_FWDDECL)
#include <Modloader/app/structs/ValidationEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValidationEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
