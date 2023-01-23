#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Water3_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Water3_INITIALIZING
#if !defined(IL2CPP_STRUCT_Water3_DEFINED)
#include <Modloader/app/structs/Water3__Fields.h>
#if defined(IL2CPP_STRUCT_Water3__Fields_DEFINED)
#define IL2CPP_STRUCT_Water3_DEFINED
struct Water3__Class;
struct Water3 {
    struct Water3__Class* klass;
    MonitorData* monitor;
    struct Water3__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Water3_FWDDECL)
#define IL2CPP_STRUCT_Water3_FWDDECL
#include <Modloader/app/structs/Water3__Class.h>
#endif
#undef IL2CPP_STRUCT_Water3_INITIALIZING
#if !defined(IL2CPP_STRUCT_Water3_DEFINED) && !defined(IL2CPP_STRUCT_Water3_FWDDECL)
#include <Modloader/app/structs/Water3.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Water3.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
