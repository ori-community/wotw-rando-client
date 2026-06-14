#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetCharacterDataRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetCharacterDataRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetCharacterDataRequest_DEFINED)
#include <Modloader/app/structs/GetCharacterDataRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetCharacterDataRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetCharacterDataRequest_DEFINED
struct GetCharacterDataRequest__Class;
struct GetCharacterDataRequest {
    struct GetCharacterDataRequest__Class* klass;
    MonitorData* monitor;
    struct GetCharacterDataRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetCharacterDataRequest_FWDDECL)
#define IL2CPP_STRUCT_GetCharacterDataRequest_FWDDECL
#include <Modloader/app/structs/GetCharacterDataRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetCharacterDataRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetCharacterDataRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetCharacterDataRequest_FWDDECL)
#include <Modloader/app/structs/GetCharacterDataRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetCharacterDataRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
