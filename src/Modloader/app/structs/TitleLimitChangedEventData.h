#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleLimitChangedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleLimitChangedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleLimitChangedEventData_DEFINED)
#include <Modloader/app/structs/TitleLimitChangedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_TitleLimitChangedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_TitleLimitChangedEventData_DEFINED
struct TitleLimitChangedEventData__Class;
struct TitleLimitChangedEventData {
    struct TitleLimitChangedEventData__Class* klass;
    MonitorData* monitor;
    struct TitleLimitChangedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TitleLimitChangedEventData_FWDDECL)
#define IL2CPP_STRUCT_TitleLimitChangedEventData_FWDDECL
#include <Modloader/app/structs/TitleLimitChangedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_TitleLimitChangedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleLimitChangedEventData_DEFINED) && !defined(IL2CPP_STRUCT_TitleLimitChangedEventData_FWDDECL)
#include <Modloader/app/structs/TitleLimitChangedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleLimitChangedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
