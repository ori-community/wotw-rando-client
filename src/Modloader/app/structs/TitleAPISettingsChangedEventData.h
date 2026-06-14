#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleAPISettingsChangedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleAPISettingsChangedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleAPISettingsChangedEventData_DEFINED)
#include <Modloader/app/structs/TitleAPISettingsChangedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_TitleAPISettingsChangedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_TitleAPISettingsChangedEventData_DEFINED
struct TitleAPISettingsChangedEventData__Class;
struct TitleAPISettingsChangedEventData {
    struct TitleAPISettingsChangedEventData__Class* klass;
    MonitorData* monitor;
    struct TitleAPISettingsChangedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TitleAPISettingsChangedEventData_FWDDECL)
#define IL2CPP_STRUCT_TitleAPISettingsChangedEventData_FWDDECL
#include <Modloader/app/structs/TitleAPISettingsChangedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_TitleAPISettingsChangedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleAPISettingsChangedEventData_DEFINED) && !defined(IL2CPP_STRUCT_TitleAPISettingsChangedEventData_FWDDECL)
#include <Modloader/app/structs/TitleAPISettingsChangedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleAPISettingsChangedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
