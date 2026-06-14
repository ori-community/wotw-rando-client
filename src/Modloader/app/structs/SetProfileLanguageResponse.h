#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetProfileLanguageResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetProfileLanguageResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetProfileLanguageResponse_DEFINED)
#include <Modloader/app/structs/SetProfileLanguageResponse__Fields.h>
#if defined(IL2CPP_STRUCT_SetProfileLanguageResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_SetProfileLanguageResponse_DEFINED
struct SetProfileLanguageResponse__Class;
struct SetProfileLanguageResponse {
    struct SetProfileLanguageResponse__Class* klass;
    MonitorData* monitor;
    struct SetProfileLanguageResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetProfileLanguageResponse_FWDDECL)
#define IL2CPP_STRUCT_SetProfileLanguageResponse_FWDDECL
#include <Modloader/app/structs/SetProfileLanguageResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_SetProfileLanguageResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetProfileLanguageResponse_DEFINED) && !defined(IL2CPP_STRUCT_SetProfileLanguageResponse_FWDDECL)
#include <Modloader/app/structs/SetProfileLanguageResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetProfileLanguageResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
