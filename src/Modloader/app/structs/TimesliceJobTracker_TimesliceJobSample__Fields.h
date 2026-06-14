#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimesliceJobTracker_TimesliceJobSample__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimesliceJobTracker_TimesliceJobSample__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimesliceJobTracker_TimesliceJobSample__Fields_DEFINED)
#define IL2CPP_STRUCT_TimesliceJobTracker_TimesliceJobSample__Fields_DEFINED
struct String;
struct __declspec(align(8)) TimesliceJobTracker_TimesliceJobSample__Fields {
    struct String* Time;
    struct String* OwnerName;
    struct String* JobName;
    struct String* JobType;
    double Duration;
    double ReportOverhead;
    float Budget;
    struct String* ContextualData;
};
#endif
#if !defined(IL2CPP_STRUCT_TimesliceJobTracker_TimesliceJobSample__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimesliceJobTracker_TimesliceJobSample__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TimesliceJobTracker_TimesliceJobSample__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimesliceJobTracker_TimesliceJobSample__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimesliceJobTracker_TimesliceJobSample__Fields_FWDDECL)
#include <Modloader/app/structs/TimesliceJobTracker_TimesliceJobSample__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimesliceJobTracker_TimesliceJobSample__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
