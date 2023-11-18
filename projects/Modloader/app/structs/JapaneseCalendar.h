#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JapaneseCalendar_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JapaneseCalendar_INITIALIZING
#if !defined(IL2CPP_STRUCT_JapaneseCalendar_DEFINED)
#include <Modloader/app/structs/JapaneseCalendar__Fields.h>
#if defined(IL2CPP_STRUCT_JapaneseCalendar__Fields_DEFINED)
#define IL2CPP_STRUCT_JapaneseCalendar_DEFINED
struct JapaneseCalendar__Class;
struct JapaneseCalendar {
    struct JapaneseCalendar__Class* klass;
    MonitorData* monitor;
    struct JapaneseCalendar__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JapaneseCalendar_FWDDECL)
#define IL2CPP_STRUCT_JapaneseCalendar_FWDDECL
#include <Modloader/app/structs/JapaneseCalendar__Class.h>
#endif
#undef IL2CPP_STRUCT_JapaneseCalendar_INITIALIZING
#if !defined(IL2CPP_STRUCT_JapaneseCalendar_DEFINED) && !defined(IL2CPP_STRUCT_JapaneseCalendar_FWDDECL)
#include <Modloader/app/structs/JapaneseCalendar.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JapaneseCalendar.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
