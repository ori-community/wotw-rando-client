#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Cookie_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Cookie_INITIALIZING
#if !defined(IL2CPP_STRUCT_Cookie_DEFINED)
#include <Modloader/app/structs/Cookie__Fields.h>
#if defined(IL2CPP_STRUCT_Cookie__Fields_DEFINED)
#define IL2CPP_STRUCT_Cookie_DEFINED
struct Cookie__Class;
struct Cookie {
    struct Cookie__Class* klass;
    MonitorData* monitor;
    struct Cookie__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Cookie_FWDDECL)
#define IL2CPP_STRUCT_Cookie_FWDDECL
#include <Modloader/app/structs/Cookie__Class.h>
#endif
#undef IL2CPP_STRUCT_Cookie_INITIALIZING
#if !defined(IL2CPP_STRUCT_Cookie_DEFINED) && !defined(IL2CPP_STRUCT_Cookie_FWDDECL)
#include <Modloader/app/structs/Cookie.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Cookie.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
