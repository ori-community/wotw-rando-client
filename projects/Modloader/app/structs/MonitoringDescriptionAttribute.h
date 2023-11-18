#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonitoringDescriptionAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonitoringDescriptionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonitoringDescriptionAttribute_DEFINED)
#include <Modloader/app/structs/MonitoringDescriptionAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_MonitoringDescriptionAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_MonitoringDescriptionAttribute_DEFINED
struct MonitoringDescriptionAttribute__Class;
struct MonitoringDescriptionAttribute {
    struct MonitoringDescriptionAttribute__Class* klass;
    MonitorData* monitor;
    struct MonitoringDescriptionAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonitoringDescriptionAttribute_FWDDECL)
#define IL2CPP_STRUCT_MonitoringDescriptionAttribute_FWDDECL
#include <Modloader/app/structs/MonitoringDescriptionAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_MonitoringDescriptionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonitoringDescriptionAttribute_DEFINED) && !defined(IL2CPP_STRUCT_MonitoringDescriptionAttribute_FWDDECL)
#include <Modloader/app/structs/MonitoringDescriptionAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonitoringDescriptionAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
