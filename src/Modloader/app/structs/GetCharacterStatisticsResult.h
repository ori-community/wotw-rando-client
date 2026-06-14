#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetCharacterStatisticsResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetCharacterStatisticsResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetCharacterStatisticsResult_DEFINED)
#include <Modloader/app/structs/GetCharacterStatisticsResult__Fields.h>
#if defined(IL2CPP_STRUCT_GetCharacterStatisticsResult__Fields_DEFINED)
#define IL2CPP_STRUCT_GetCharacterStatisticsResult_DEFINED
struct GetCharacterStatisticsResult__Class;
struct GetCharacterStatisticsResult {
    struct GetCharacterStatisticsResult__Class* klass;
    MonitorData* monitor;
    struct GetCharacterStatisticsResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetCharacterStatisticsResult_FWDDECL)
#define IL2CPP_STRUCT_GetCharacterStatisticsResult_FWDDECL
#include <Modloader/app/structs/GetCharacterStatisticsResult__Class.h>
#endif
#undef IL2CPP_STRUCT_GetCharacterStatisticsResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetCharacterStatisticsResult_DEFINED) && !defined(IL2CPP_STRUCT_GetCharacterStatisticsResult_FWDDECL)
#include <Modloader/app/structs/GetCharacterStatisticsResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetCharacterStatisticsResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
