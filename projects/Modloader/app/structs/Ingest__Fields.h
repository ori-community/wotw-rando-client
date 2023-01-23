#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Ingest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Ingest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ingest__Fields_DEFINED)
#define IL2CPP_STRUCT_Ingest__Fields_DEFINED
struct String;
struct __declspec(align(8)) Ingest__Fields {
    int64_t _time_k__BackingField;
    struct String* _clientIp_k__BackingField;
    int64_t _auth_k__BackingField;
    int64_t _quality_k__BackingField;
    int64_t _uploadTime_k__BackingField;
    struct String* _userAgent_k__BackingField;
    struct String* _client_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_Ingest__Fields_FWDDECL)
#define IL2CPP_STRUCT_Ingest__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Ingest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ingest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Ingest__Fields_FWDDECL)
#include <Modloader/app/structs/Ingest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Ingest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
