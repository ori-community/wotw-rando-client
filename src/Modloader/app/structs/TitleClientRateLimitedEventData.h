#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleClientRateLimitedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleClientRateLimitedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleClientRateLimitedEventData_DEFINED)
#include <Modloader/app/structs/TitleClientRateLimitedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_TitleClientRateLimitedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_TitleClientRateLimitedEventData_DEFINED
struct TitleClientRateLimitedEventData__Class;
struct TitleClientRateLimitedEventData {
    struct TitleClientRateLimitedEventData__Class* klass;
    MonitorData* monitor;
    struct TitleClientRateLimitedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TitleClientRateLimitedEventData_FWDDECL)
#define IL2CPP_STRUCT_TitleClientRateLimitedEventData_FWDDECL
#include <Modloader/app/structs/TitleClientRateLimitedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_TitleClientRateLimitedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleClientRateLimitedEventData_DEFINED) && !defined(IL2CPP_STRUCT_TitleClientRateLimitedEventData_FWDDECL)
#include <Modloader/app/structs/TitleClientRateLimitedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleClientRateLimitedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
