#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NetworkCredential_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NetworkCredential_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetworkCredential_DEFINED)
#include <Modloader/app/structs/NetworkCredential__Fields.h>
#if defined(IL2CPP_STRUCT_NetworkCredential__Fields_DEFINED)
#define IL2CPP_STRUCT_NetworkCredential_DEFINED
struct NetworkCredential__Class;
struct NetworkCredential {
    struct NetworkCredential__Class* klass;
    MonitorData* monitor;
    struct NetworkCredential__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NetworkCredential_FWDDECL)
#define IL2CPP_STRUCT_NetworkCredential_FWDDECL
#include <Modloader/app/structs/NetworkCredential__Class.h>
#endif
#undef IL2CPP_STRUCT_NetworkCredential_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetworkCredential_DEFINED) && !defined(IL2CPP_STRUCT_NetworkCredential_FWDDECL)
#include <Modloader/app/structs/NetworkCredential.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NetworkCredential.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
