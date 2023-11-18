#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ApplyToGroupResponse__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ApplyToGroupResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApplyToGroupResponse__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_ApplyToGroupResponse__Fields_DEFINED
struct EntityWithLineage;
struct EntityKey_5;
struct ApplyToGroupResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct EntityWithLineage* Entity;
    struct DateTime Expires;
    struct EntityKey_5* Group;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ApplyToGroupResponse__Fields_FWDDECL)
#define IL2CPP_STRUCT_ApplyToGroupResponse__Fields_FWDDECL
#include <Modloader/app/structs/EntityKey_5.h>
#include <Modloader/app/structs/EntityWithLineage.h>
#endif
#undef IL2CPP_STRUCT_ApplyToGroupResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApplyToGroupResponse__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ApplyToGroupResponse__Fields_FWDDECL)
#include <Modloader/app/structs/ApplyToGroupResponse__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ApplyToGroupResponse__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
