#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxOneStatistics_StatisticReading_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxOneStatistics_StatisticReading_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneStatistics_StatisticReading_DEFINED)
#define IL2CPP_STRUCT_XboxOneStatistics_StatisticReading_DEFINED
struct String;
struct XboxOneStatistics_StatisticReading {
    struct String* Name;
    struct String* Type;
    struct String* Value;
};
#endif
#if !defined(IL2CPP_STRUCT_XboxOneStatistics_StatisticReading_FWDDECL)
#define IL2CPP_STRUCT_XboxOneStatistics_StatisticReading_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XboxOneStatistics_StatisticReading_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneStatistics_StatisticReading_DEFINED) && !defined(IL2CPP_STRUCT_XboxOneStatistics_StatisticReading_FWDDECL)
#include <Modloader/app/structs/XboxOneStatistics_StatisticReading.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxOneStatistics_StatisticReading.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
