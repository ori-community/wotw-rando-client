#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityWithLineage__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityWithLineage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityWithLineage__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityWithLineage__Fields_DEFINED
struct EntityKey_5;
struct Dictionary_2_System_String_PlayFab_GroupsModels_EntityKey_;
struct __declspec(align(8)) EntityWithLineage__Fields {
    struct EntityKey_5* Key;
    struct Dictionary_2_System_String_PlayFab_GroupsModels_EntityKey_* Lineage;
};
#endif
#if !defined(IL2CPP_STRUCT_EntityWithLineage__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityWithLineage__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_PlayFab_GroupsModels_EntityKey_.h>
#include <Modloader/app/structs/EntityKey_5.h>
#endif
#undef IL2CPP_STRUCT_EntityWithLineage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityWithLineage__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityWithLineage__Fields_FWDDECL)
#include <Modloader/app/structs/EntityWithLineage__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityWithLineage__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
