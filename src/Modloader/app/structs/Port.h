#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Port_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Port_INITIALIZING
#if !defined(IL2CPP_STRUCT_Port_DEFINED)
#include <Modloader/app/structs/Port__Fields.h>
#if defined(IL2CPP_STRUCT_Port__Fields_DEFINED)
#define IL2CPP_STRUCT_Port_DEFINED
struct Port__Class;
struct Port {
    struct Port__Class* klass;
    MonitorData* monitor;
    struct Port__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Port_FWDDECL)
#define IL2CPP_STRUCT_Port_FWDDECL
#include <Modloader/app/structs/Port__Class.h>
#endif
#undef IL2CPP_STRUCT_Port_INITIALIZING
#if !defined(IL2CPP_STRUCT_Port_DEFINED) && !defined(IL2CPP_STRUCT_Port_FWDDECL)
#include <Modloader/app/structs/Port.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Port.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
