#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroupUpdatedEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroupUpdatedEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupUpdatedEventData__Fields_DEFINED)
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED)
#define IL2CPP_STRUCT_GroupUpdatedEventData__Fields_DEFINED
struct String;
struct EntityLineage_1;
struct GroupPropertyValues;
struct GroupUpdatedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String* EntityChain;
    struct EntityLineage_1* EntityLineage;
    struct String* GroupName;
    struct GroupPropertyValues* NewValues;
    struct GroupPropertyValues* OldValues;
    struct String* UpdaterEntityId;
    struct String* UpdaterEntityType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroupUpdatedEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_GroupUpdatedEventData__Fields_FWDDECL
#include <Modloader/app/structs/EntityLineage_1.h>
#include <Modloader/app/structs/GroupPropertyValues.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GroupUpdatedEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupUpdatedEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GroupUpdatedEventData__Fields_FWDDECL)
#include <Modloader/app/structs/GroupUpdatedEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroupUpdatedEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
