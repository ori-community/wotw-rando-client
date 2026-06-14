#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleExceededLimitEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleExceededLimitEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleExceededLimitEventData_DEFINED)
#include <Modloader/app/structs/TitleExceededLimitEventData__Fields.h>
#if defined(IL2CPP_STRUCT_TitleExceededLimitEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_TitleExceededLimitEventData_DEFINED
struct TitleExceededLimitEventData__Class;
struct TitleExceededLimitEventData {
    struct TitleExceededLimitEventData__Class* klass;
    MonitorData* monitor;
    struct TitleExceededLimitEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TitleExceededLimitEventData_FWDDECL)
#define IL2CPP_STRUCT_TitleExceededLimitEventData_FWDDECL
#include <Modloader/app/structs/TitleExceededLimitEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_TitleExceededLimitEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleExceededLimitEventData_DEFINED) && !defined(IL2CPP_STRUCT_TitleExceededLimitEventData_FWDDECL)
#include <Modloader/app/structs/TitleExceededLimitEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleExceededLimitEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
