#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeleteCharacterFromUserRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeleteCharacterFromUserRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeleteCharacterFromUserRequest_DEFINED)
#include <Modloader/app/structs/DeleteCharacterFromUserRequest__Fields.h>
#if defined(IL2CPP_STRUCT_DeleteCharacterFromUserRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_DeleteCharacterFromUserRequest_DEFINED
struct DeleteCharacterFromUserRequest__Class;
struct DeleteCharacterFromUserRequest {
    struct DeleteCharacterFromUserRequest__Class* klass;
    MonitorData* monitor;
    struct DeleteCharacterFromUserRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeleteCharacterFromUserRequest_FWDDECL)
#define IL2CPP_STRUCT_DeleteCharacterFromUserRequest_FWDDECL
#include <Modloader/app/structs/DeleteCharacterFromUserRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_DeleteCharacterFromUserRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeleteCharacterFromUserRequest_DEFINED) && !defined(IL2CPP_STRUCT_DeleteCharacterFromUserRequest_FWDDECL)
#include <Modloader/app/structs/DeleteCharacterFromUserRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeleteCharacterFromUserRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
