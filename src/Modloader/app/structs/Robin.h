#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Robin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Robin_INITIALIZING
#if !defined(IL2CPP_STRUCT_Robin_DEFINED)
#include <Modloader/app/structs/Robin__Fields.h>
#if defined(IL2CPP_STRUCT_Robin__Fields_DEFINED)
#define IL2CPP_STRUCT_Robin_DEFINED
struct Robin__Class;
struct Robin {
    struct Robin__Class* klass;
    MonitorData* monitor;
    struct Robin__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Robin_FWDDECL)
#define IL2CPP_STRUCT_Robin_FWDDECL
#include <Modloader/app/structs/Robin__Class.h>
#endif
#undef IL2CPP_STRUCT_Robin_INITIALIZING
#if !defined(IL2CPP_STRUCT_Robin_DEFINED) && !defined(IL2CPP_STRUCT_Robin_FWDDECL)
#include <Modloader/app/structs/Robin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Robin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
