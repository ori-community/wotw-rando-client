#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeType_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeType_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeType_DEFINED)
#include <Modloader/app/structs/TimeType__Fields.h>
#if defined(IL2CPP_STRUCT_TimeType__Fields_DEFINED)
#define IL2CPP_STRUCT_TimeType_DEFINED
struct TimeType__Class;
struct TimeType {
    struct TimeType__Class* klass;
    MonitorData* monitor;
    struct TimeType__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeType_FWDDECL)
#define IL2CPP_STRUCT_TimeType_FWDDECL
#include <Modloader/app/structs/TimeType__Class.h>
#endif
#undef IL2CPP_STRUCT_TimeType_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeType_DEFINED) && !defined(IL2CPP_STRUCT_TimeType_FWDDECL)
#include <Modloader/app/structs/TimeType.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeType.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
