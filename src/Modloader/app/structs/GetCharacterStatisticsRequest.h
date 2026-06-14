#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetCharacterStatisticsRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetCharacterStatisticsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetCharacterStatisticsRequest_DEFINED)
#include <Modloader/app/structs/GetCharacterStatisticsRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetCharacterStatisticsRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetCharacterStatisticsRequest_DEFINED
struct GetCharacterStatisticsRequest__Class;
struct GetCharacterStatisticsRequest {
    struct GetCharacterStatisticsRequest__Class* klass;
    MonitorData* monitor;
    struct GetCharacterStatisticsRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetCharacterStatisticsRequest_FWDDECL)
#define IL2CPP_STRUCT_GetCharacterStatisticsRequest_FWDDECL
#include <Modloader/app/structs/GetCharacterStatisticsRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetCharacterStatisticsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetCharacterStatisticsRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetCharacterStatisticsRequest_FWDDECL)
#include <Modloader/app/structs/GetCharacterStatisticsRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetCharacterStatisticsRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
