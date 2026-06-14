#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GrantCharacterToUserRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GrantCharacterToUserRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrantCharacterToUserRequest_DEFINED)
#include <Modloader/app/structs/GrantCharacterToUserRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GrantCharacterToUserRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GrantCharacterToUserRequest_DEFINED
struct GrantCharacterToUserRequest__Class;
struct GrantCharacterToUserRequest {
    struct GrantCharacterToUserRequest__Class* klass;
    MonitorData* monitor;
    struct GrantCharacterToUserRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GrantCharacterToUserRequest_FWDDECL)
#define IL2CPP_STRUCT_GrantCharacterToUserRequest_FWDDECL
#include <Modloader/app/structs/GrantCharacterToUserRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GrantCharacterToUserRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrantCharacterToUserRequest_DEFINED) && !defined(IL2CPP_STRUCT_GrantCharacterToUserRequest_FWDDECL)
#include <Modloader/app/structs/GrantCharacterToUserRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GrantCharacterToUserRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
