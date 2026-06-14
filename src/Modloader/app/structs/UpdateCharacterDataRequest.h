#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateCharacterDataRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateCharacterDataRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateCharacterDataRequest_DEFINED)
#include <Modloader/app/structs/UpdateCharacterDataRequest__Fields.h>
#if defined(IL2CPP_STRUCT_UpdateCharacterDataRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_UpdateCharacterDataRequest_DEFINED
struct UpdateCharacterDataRequest__Class;
struct UpdateCharacterDataRequest {
    struct UpdateCharacterDataRequest__Class* klass;
    MonitorData* monitor;
    struct UpdateCharacterDataRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdateCharacterDataRequest_FWDDECL)
#define IL2CPP_STRUCT_UpdateCharacterDataRequest_FWDDECL
#include <Modloader/app/structs/UpdateCharacterDataRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_UpdateCharacterDataRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateCharacterDataRequest_DEFINED) && !defined(IL2CPP_STRUCT_UpdateCharacterDataRequest_FWDDECL)
#include <Modloader/app/structs/UpdateCharacterDataRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateCharacterDataRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
