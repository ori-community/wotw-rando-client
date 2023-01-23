#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Datadog_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Datadog_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datadog_DEFINED)
#include <Modloader/app/structs/Datadog__Fields.h>
#if defined(IL2CPP_STRUCT_Datadog__Fields_DEFINED)
#define IL2CPP_STRUCT_Datadog_DEFINED
struct Datadog__Class;
struct Datadog {
    struct Datadog__Class* klass;
    MonitorData* monitor;
    struct Datadog__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Datadog_FWDDECL)
#define IL2CPP_STRUCT_Datadog_FWDDECL
#include <Modloader/app/structs/Datadog__Class.h>
#endif
#undef IL2CPP_STRUCT_Datadog_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datadog_DEFINED) && !defined(IL2CPP_STRUCT_Datadog_FWDDECL)
#include <Modloader/app/structs/Datadog.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Datadog.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
