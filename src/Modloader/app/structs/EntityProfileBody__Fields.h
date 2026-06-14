#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityProfileBody__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityProfileBody__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityProfileBody__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_EntityProfileBody__Fields_DEFINED
struct String;
struct EntityKey_7;
struct Dictionary_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata_;
struct EntityLineage;
struct Dictionary_2_System_String_PlayFab_ProfilesModels_EntityDataObject_;
struct List_1_PlayFab_ProfilesModels_EntityPermissionStatement_;
struct __declspec(align(8)) EntityProfileBody__Fields {
    struct DateTime Created;
    struct String* DisplayName;
    struct EntityKey_7* Entity;
    struct String* EntityChain;
    struct Dictionary_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata_* Files;
    struct String* Language;
    struct EntityLineage* Lineage;
    struct Dictionary_2_System_String_PlayFab_ProfilesModels_EntityDataObject_* Objects;
    struct List_1_PlayFab_ProfilesModels_EntityPermissionStatement_* Permissions;
    int32_t VersionNumber;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityProfileBody__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityProfileBody__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_PlayFab_ProfilesModels_EntityDataObject_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_PlayFab_ProfilesModels_EntityProfileFileMetadata_.h>
#include <Modloader/app/structs/EntityKey_7.h>
#include <Modloader/app/structs/EntityLineage.h>
#include <Modloader/app/structs/List_1_PlayFab_ProfilesModels_EntityPermissionStatement_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_EntityProfileBody__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityProfileBody__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityProfileBody__Fields_FWDDECL)
#include <Modloader/app/structs/EntityProfileBody__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityProfileBody__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
