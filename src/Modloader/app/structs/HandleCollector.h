#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HandleCollector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HandleCollector_INITIALIZING
#if !defined(IL2CPP_STRUCT_HandleCollector_DEFINED)
#include <Modloader/app/structs/HandleCollector__Fields.h>
#if defined(IL2CPP_STRUCT_HandleCollector__Fields_DEFINED)
#define IL2CPP_STRUCT_HandleCollector_DEFINED
struct HandleCollector__Class;
struct HandleCollector {
    struct HandleCollector__Class* klass;
    MonitorData* monitor;
    struct HandleCollector__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HandleCollector_FWDDECL)
#define IL2CPP_STRUCT_HandleCollector_FWDDECL
#include <Modloader/app/structs/HandleCollector__Class.h>
#endif
#undef IL2CPP_STRUCT_HandleCollector_INITIALIZING
#if !defined(IL2CPP_STRUCT_HandleCollector_DEFINED) && !defined(IL2CPP_STRUCT_HandleCollector_FWDDECL)
#include <Modloader/app/structs/HandleCollector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HandleCollector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
