#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NamingStrategy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NamingStrategy_INITIALIZING
#if !defined(IL2CPP_STRUCT_NamingStrategy_DEFINED)
#include <Modloader/app/structs/NamingStrategy__Fields.h>
#if defined(IL2CPP_STRUCT_NamingStrategy__Fields_DEFINED)
#define IL2CPP_STRUCT_NamingStrategy_DEFINED
struct NamingStrategy__Class;
struct NamingStrategy {
    struct NamingStrategy__Class* klass;
    MonitorData* monitor;
    struct NamingStrategy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NamingStrategy_FWDDECL)
#define IL2CPP_STRUCT_NamingStrategy_FWDDECL
#include <Modloader/app/structs/NamingStrategy__Class.h>
#endif
#undef IL2CPP_STRUCT_NamingStrategy_INITIALIZING
#if !defined(IL2CPP_STRUCT_NamingStrategy_DEFINED) && !defined(IL2CPP_STRUCT_NamingStrategy_FWDDECL)
#include <Modloader/app/structs/NamingStrategy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NamingStrategy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
