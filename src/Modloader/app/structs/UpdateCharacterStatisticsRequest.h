#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateCharacterStatisticsRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateCharacterStatisticsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateCharacterStatisticsRequest_DEFINED)
#include <Modloader/app/structs/UpdateCharacterStatisticsRequest__Fields.h>
#if defined(IL2CPP_STRUCT_UpdateCharacterStatisticsRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_UpdateCharacterStatisticsRequest_DEFINED
struct UpdateCharacterStatisticsRequest__Class;
struct UpdateCharacterStatisticsRequest {
    struct UpdateCharacterStatisticsRequest__Class* klass;
    MonitorData* monitor;
    struct UpdateCharacterStatisticsRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdateCharacterStatisticsRequest_FWDDECL)
#define IL2CPP_STRUCT_UpdateCharacterStatisticsRequest_FWDDECL
#include <Modloader/app/structs/UpdateCharacterStatisticsRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_UpdateCharacterStatisticsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateCharacterStatisticsRequest_DEFINED) && !defined(IL2CPP_STRUCT_UpdateCharacterStatisticsRequest_FWDDECL)
#include <Modloader/app/structs/UpdateCharacterStatisticsRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateCharacterStatisticsRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
