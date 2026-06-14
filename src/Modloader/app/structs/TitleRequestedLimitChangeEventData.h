#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleRequestedLimitChangeEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleRequestedLimitChangeEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleRequestedLimitChangeEventData_DEFINED)
#include <Modloader/app/structs/TitleRequestedLimitChangeEventData__Fields.h>
#if defined(IL2CPP_STRUCT_TitleRequestedLimitChangeEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_TitleRequestedLimitChangeEventData_DEFINED
struct TitleRequestedLimitChangeEventData__Class;
struct TitleRequestedLimitChangeEventData {
    struct TitleRequestedLimitChangeEventData__Class* klass;
    MonitorData* monitor;
    struct TitleRequestedLimitChangeEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TitleRequestedLimitChangeEventData_FWDDECL)
#define IL2CPP_STRUCT_TitleRequestedLimitChangeEventData_FWDDECL
#include <Modloader/app/structs/TitleRequestedLimitChangeEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_TitleRequestedLimitChangeEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleRequestedLimitChangeEventData_DEFINED) && !defined(IL2CPP_STRUCT_TitleRequestedLimitChangeEventData_FWDDECL)
#include <Modloader/app/structs/TitleRequestedLimitChangeEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleRequestedLimitChangeEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
