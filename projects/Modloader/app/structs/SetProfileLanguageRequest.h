#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetProfileLanguageRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetProfileLanguageRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetProfileLanguageRequest_DEFINED)
#include <Modloader/app/structs/SetProfileLanguageRequest__Fields.h>
#if defined(IL2CPP_STRUCT_SetProfileLanguageRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_SetProfileLanguageRequest_DEFINED
struct SetProfileLanguageRequest__Class;
struct SetProfileLanguageRequest {
    struct SetProfileLanguageRequest__Class* klass;
    MonitorData* monitor;
    struct SetProfileLanguageRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetProfileLanguageRequest_FWDDECL)
#define IL2CPP_STRUCT_SetProfileLanguageRequest_FWDDECL
#include <Modloader/app/structs/SetProfileLanguageRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_SetProfileLanguageRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetProfileLanguageRequest_DEFINED) && !defined(IL2CPP_STRUCT_SetProfileLanguageRequest_FWDDECL)
#include <Modloader/app/structs/SetProfileLanguageRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetProfileLanguageRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
